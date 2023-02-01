#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

struct DisjointSet
{
    vector<int> parent;
    vector<int> size;
    DisjointSet(int maxSize)
    {
        parent.resize(maxSize);
        size.resize(maxSize);
        for (int i = 0; i < maxSize; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void union_set(int a, int b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

bool isPossible(int n, vector<vector<int>> &edges)
{
    map<int, int> graph;
    DisjointSet S(n + 5);
    for (auto &it : edges)
    {
        graph[it.front()]++;
        graph[it.back()]++;
        S.union_set(it.front(), it.back());
    }

    vector<int> count;
    for (auto &[a, b] : graph)
        if (b == n - 1 and (n - 1) & 1)
            return false;
        else if (b & 1)
            count.push_back(a);
    int total = count.size();

    map<int, int> cntCount;
    for (int &it : count)
        cntCount[S.find_set(it)]++;
    if (cntCount.size() == 1 or cntCount.size() > 4)
        return false;
    int left = 2;
    vector<int> help;
    for (auto &[a, b] : cntCount)
        help.push_back(b);

    sort(help.begin(), help.end(), greater<>());
    for (int i = 0; i < help.size(); i++)
    {
        if (help[i] > left)
            return false;
        for (int j = i + 1; j < help.size(); j++)
        {
            if (help[j] >= help[i])
            {
                help[j] -= help[i];
                left -= help[i];
                help[i] = 0;
                break;
            }
            else if (help[j])
            {
                help[i] -= help[j];
                left -= help[j];
                help[j] = 0;
            }
        }
    }
    if (accumulate(help.begin(), help.end(), 0ll))
        return false;
    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vi> edge{{1, 2}, {2, 3}, {3, 4}, {4, 2}, {1, 4}, {2, 5}};
    isPossible(5, edge);
}