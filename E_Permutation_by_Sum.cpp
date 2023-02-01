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
int ans = INT_MAX;
int n, m;
vector<vector<bool>> visited;
vector<vector<int>> dir{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
void BFS(int x, int y, vector<vector<char>> &maze)
{
    visited[x][y] = true;
    queue<pair<int, int>> q;
    q.push({x, y});
    int k = 1;
    int temp = 0;
    while (k)
    {
        x = q.front().first, y = q.front().second;
        if ((x == 0 or y == 0 or x == n - 1 or y == m - 1) and temp != 0)
        {
            ans = temp;
            return;
        }
        q.pop();
        k--;
        for (int i = 0; i < 4; i++)
        {
            int nex = x + dir[i][0], ney = y + dir[i][1];
            if (nex > -1 and ney > -1 and nex < n and ney < m and visited[nex][ney] == false and maze[nex][ney] == '.')
            {
                visited[nex][ney] = true;
                q.push({nex, ney});
            }
        }
        if (k == 0)
        {
            k = q.size();
            temp++;
        }
    }
}
int nearestExit(vector<vector<char>> &maze, vector<int> &entrance)
{
    n = maze.size();
    m = maze.front().size();
    visited.resize(n, vector<bool>(m));
    BFS(entrance.front(), entrance.back(), maze);
    if (ans == INT_MAX)
        return -1;
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi entrance{1, 2};
    vector<vector<char>> maze{{'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}};
    cout << nearestExit(maze, entrance);
}