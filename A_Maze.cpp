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

vector<vector<bool>> visited;
vector<vector<char>> matrix;
int k, s, l = 0;
inline void dfs(int x, int y)
{
    if (visited[x][y] == false)
    {
        visited[x][y] = true;
        if (l >= s - k)
            matrix[x][y] = 'X';
        l++;
        if (matrix[x - 1][y] == '.')
            dfs(x - 1, y);
        if (matrix[x + 1][y] == '.')
            dfs(x + 1, y);
        if (matrix[x][y + 1] == '.')
            dfs(x, y + 1);
        if (matrix[x][y - 1] == '.')
            dfs(x, y - 1);
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m >> k;
    matrix.resize(n + 2, vector<char>(m + 2, '#'));
    visited.resize(n + 2, vector<bool>(m + 2));
    int x, y;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == '.')
            {
                s++;
                x = i, y = j;
            }
        }
    }
    dfs(x, y);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << matrix[i][j];
        cout << endl;
    }
}