#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

struct DisjointSet
{
    vector<int> parent;
    vector<int> size;
    DisjointSet(int maxSize)
    {
        maxSize++;
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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    DisjointSet dsu(n);
    for (int i = 0; i < m; i++)
    {
        int g;
        cin >> g;
        vi v(g);
        for (auto &it : v)
            cin >> it;
        for (int j = 1; j < g; j++)
        {
            dsu.union_set(v[j], v[j - 1]);
        }
    }
    for (int i = 1; i <= n; i++)
        cout << dsu.size[dsu.find_set(i)] << ' ';
}