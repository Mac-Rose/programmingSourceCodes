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
#define MOD 1000000007
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> pos;

vector<pair<int, int>> dir{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
int n, m;
bool DFS(int x, int y, string s, vector<vector<char>> &board)
{
    if (s.size() == 0)
        return true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dir[i].first, ny = y + dir[i].second;
        if (nx < n and ny < m and nx > -1 and ny > -1 and board[nx][ny] == s.front() and !visited[nx][ny])
        {
            if (DFS(nx, ny, s.substr(1), board))
                return true;
            visited[nx][ny] = false;
        }
    }
    return false;
}
bool search(string s, vector<vector<char>> &board)
{
    if (s.size() == 0)
        return true;

    for (auto &[a, b] : pos[s.front() - 97])
    {
        visited[a][b] = true;
        if (DFS(a, b, s.substr(1), board))
            return true;
        visited[a][b] = false;
    }
    return false;
}
vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
{
    vector<string> ans;
    n = board.size(), m = board.front().size();
    visited.resize(n, vector<bool>(m));
    pos.resize(26);
    for (auto &it : board)
        for (char &i : it)
            pos[i - 97].push_back({&it - &board.front(), &i - &it.front()});

    for (string &it : words)
    {
        if (search(it, board))
            ans.push_back(it);
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<char>> board = {{'o', 'a', 'a', 'n'}, {'e', 't', 'a', 'e'}, {'i', 'h', 'k', 'r'}, {'i', 'f', 'l', 'v'}};
    vector<string> words = {"oath", "pea", "eat", "rain"};
    vector<string> ans = findWords(board, words);
    for (string &it : ans)
        cout << it << ' ';
}