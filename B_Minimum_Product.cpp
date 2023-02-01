#include <bits/stdc++.h>
using namespace std;

// #define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

inline void bfs(pii a, queue<pii> &q, vector<vector<bool>> &visited, vector<vector<char>> &matrix, map<pii, vector<pii>> &G, vector<vi> &ans)
{
    if (visited[a.F][a.S] == false)
    {
        visited[a.F][a.S] = true;
        for (auto &it : G[a])
        {
            ans[it.F][it.S] = min(ans[it.F][it.S], ans[a.F][a.S] + 1);
            q.push(it);
        }
    }
    q.pop();
    if (q.empty())
        return;
    bfs(q.front(), q, visited, matrix, G, ans);
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
        int n, m;
        cin >> n >> m;
        vector<vector<char>> matrix(n, vector<char>(m));
        vector<vi> ans(n, vi(m, INT_MAX));
        queue<pii> q;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
                if (matrix[i][j] == '1')
                {
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        map<pii, vector<pii>> G;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (i != 0)
                    G[{i, j}].push_back({i - 1, j});
                if (j != 0)
                    G[{i, j}].push_back({i, j - 1});
                if (i != n - 1)
                    G[{i, j}].push_back({i + 1, j});
                if (j != m - 1)
                    G[{i, j}].push_back({i, j + 1});
            }
        vector<vector<bool>> visited(n, vector<bool>(m));
        bfs(q.front(), q, visited, matrix, G, ans);
        for (auto &it : ans)
        {
            for (auto &i : it)
                cout << i << ' ';
            cout << endl;
        }
    }
}