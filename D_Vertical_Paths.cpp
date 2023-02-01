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
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

vi temp;
vector<vi> ans1;
void dfs(int src, vector<bool> &visited, map<int, vi> &graph)
{
    visited[src] = true;
    temp.pb(src);
    for (int &it : graph[src])
    {
        if (visited[it] == false)
        {
            dfs(it, visited, graph);
        }
    }
    if (temp.empty() == false)
        ans1.pb(temp);
    temp.clear();
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi parent(n);
        map<int, vi> graph;
        vector<bool> visited(n + 1);
        for (int &it : parent)
            cin >> it;
        int root;
        for (int i = 1; i <= n; i++)
        {
            if (parent[i - 1] == i)
                root = i;
            else
            {
                graph[i].pb(parent[i - 1]);
                graph[parent[i - 1]].pb(i);
            }
        }
        dfs(root, visited, graph);
        cout << ans1.size() << endl;
        for (auto &it : ans1)
        {
            cout << it.size() << endl;
            for (int &i : it)
                cout << i << ' ';
            cout << endl;
        }
        cout << endl;
        ans1.clear();
    }
}