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

vector<vi> v;
int n;
vector<vector<bool>> visited;
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

void dfs(int i, DisjointSet &S)
{
    for (int j = 0; j < n; j++)
    {
        if (v[i][j] == 1 and visited[i][j] == false)
        {
            visited[i][j] = true;
            visited[j][i] = true;
            S.union_set(i, j);
            dfs(j, S);
        }
    }
}
/*
ek line m jitne bhi j h unke correspoding ek edge banega
*/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    v.resize(n, vi(n));
    visited.resize(n, vector<bool>(n));
    vi p(n);
    for (int &it : p)
        cin >> it;
    DisjointSet S(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char g;
            cin >> g;
            v[i][j] = g - 48;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 1 and visited[i][j] == false)
            {
                visited[i][j] = true;
                visited[j][i] = true;
                S.union_set(i, j);
                dfs(j, S);
            }
        }
    }
    map<int, priority_queue<int, vi, greater<>>> m;
    map<int, priority_queue<int, vi, greater<>>> m1;
    //dsu ki har ek family ko sort karna h fir print karke pop karna
    for (int i = 0; i < n; i++)
    {
        m[S.find_set(i)].emplace(i);
        m1[S.find_set(i)].emplace(p[i]);
    }
    vi ans(n);
    for (auto &it : m)
    {
        while (it.S.empty() == false)
        {
            ans[it.S.top()] = m1[it.F].top();
            it.S.pop();
            m1[it.F].pop();
        }
    }
    for (auto &it : ans)
        cout << it << ' ';
}