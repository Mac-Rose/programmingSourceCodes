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

vector<vector<bool>> visited(50, vector<bool>(50));
vector<vector<char>> matrix(50, vector<char>(50));
int n;
void dfs(pii a, set<pii> &s)
{
    visited[a.F][a.S] = true;
    if (a.S + 1 != n and matrix[a.F][a.S + 1] == '0' and visited[a.F][a.S + 1] == false)
    {
        s.insert({a.F, a.S + 1});
        dfs({a.F, a.S + 1}, s);
    }
    if (a.S - 1 != -1 and matrix[a.F][a.S - 1] == '0' and visited[a.F][a.S - 1] == false)
    {
        s.insert({a.F, a.S - 1});
        dfs({a.F, a.S - 1}, s);
    }
    if (a.F + 1 != n and matrix[a.F + 1][a.S] == '0' and visited[a.F + 1][a.S] == false)
    {
        s.insert({a.F + 1, a.S});
        dfs({a.F + 1, a.S}, s);
    }
    if (a.F - 1 != -1 and matrix[a.F - 1][a.S] == '0' and visited[a.F - 1][a.S + 1] == false)
    {
        s.insert({a.F - 1, a.S});
        dfs({a.F - 1, a.S}, s);
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    visited.resize(n);
    for (auto &it : visited)
        it.resize(n);
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1--, y1--, x2--, y2--;
    matrix.resize(n);
    for (auto &it : matrix)
        it.resize(n);
    for (auto &it : matrix)
        for (auto &i : it)
            cin >> i;
    set<pii> s1, s2;
    s1.insert({x1, y1});
    s2.insert({x2, y2});
    dfs({x1, y1}, s1);
    dfs({x2, y2}, s2);
    int ans = INT_MAX, temp;
    for (auto &it1 : s1)
        for (auto &it2 : s2)
        {
            temp = pow((it1.F - it2.F) + (it1.S - it2.S), 2) - 2 * ((it1.F - it2.F) * (it1.S - it2.S));
            if (temp < ans)
                ans = temp;
        }
    cout << ans;
}