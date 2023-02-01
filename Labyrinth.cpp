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

vector<vector<char>> ar;
vector<vector<char>> br;
vector<vector<bool>> vis;
int n, m;
stack<char> path;

inline bool isValid(int x, int y)
{

    if (x < 0 or x > n - 1 or y < 0 or y > m - 1)
        return false;

    if (ar[x][y] == '#' or vis[x][y] == true)
        return false;

    return true;
}

inline bool bfs(pii src)
{
    queue<pii> q;
    q.push({src.F, src.S});
    vis[src.F][src.S] = true;

    while (!q.empty())
    {
        int a = q.front().F;
        int b = q.front().S;
        q.pop();

        if (ar[a][b] == 'B')
        {
            while (1)
            {
                path.emplace(br[a][b]);

                if (path.top() == 'L')
                    b++;
                if (path.top() == 'R')
                    b--;
                if (path.top() == 'U')
                    a++;
                if (path.top() == 'D')
                    a--;

                if (a == src.F and b == src.S)
                    break;
            }
            return true;
        }

        if (isValid(a, b - 1))
            br[a][b - 1] = 'L', q.push({a, b - 1}), vis[a][b - 1] = true;

        if (isValid(a, b + 1))
            br[a][b + 1] = 'R', q.push({a, b + 1}), vis[a][b + 1] = true;

        if (isValid(a - 1, b))
            br[a - 1][b] = 'U', q.push({a - 1, b}), vis[a - 1][b] = true;

        if (isValid(a + 1, b))
            br[a + 1][b] = 'D', q.push({a + 1, b}), vis[a + 1][b] = true;
    }

    return false;
}

signed main()
{
    cin >> n >> m;

    vis.resize(n, vector<bool>(m));
    ar.resize(n, vector<char>(m));
    br.resize(n, vector<char>(m));

    pii src;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 'A')
                src = {i, j};
        }

    if (bfs(src) == true)
    {
        cout << "YES\n"
             << path.size() << endl;
        while (path.size())
            cout << path.top(), path.pop();
    }
    else
    {
        cout << "NO";
    }
}