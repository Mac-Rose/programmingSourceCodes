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

void DFS(int src, map<int, vi> &graph, vector<int> &helper, vector<bool> &visited, vi &s, int temp)
{
    visited[src] = true;
    temp += s[src];
    for (auto &it : graph[src])
    {
        if (visited[it] == false)
        {
            DFS(it, graph, helper, visited, s, temp);
            visited[it] = false;
        }
    }
    if (graph[src].size() == 1 and src != 1)
    {
        helper.push_back(temp);
    }
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
        int n, k;
        cin >> n >> k;
        vector<int> helper;
        vi parent(n - 1);
        vector<bool> visited(n + 1);

        map<int, vi> graph;

        for (int &it : parent)
        {
            cin >> it;
            graph[it].pb(&it - &parent.front() + 2);
            graph[&it - &parent.front() + 2].pb(it);
        }
        vi s(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> s[i];
        DFS(1, graph, helper, visited, s, 0ll);
        sort(all(helper), greater<>());

        int a = accumulate(all(helper), 0ll);
        int b = 0;
        for (int i = 0; i < (k % helper.size()); i++)
        {
            b += helper[i];
        }
        int ans = (k / helper.size()) * a + (b);
        cout << ans;
        cout << Endl;
    }
}