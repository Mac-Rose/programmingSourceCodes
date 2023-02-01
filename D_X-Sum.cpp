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

int daigonal(int r, int c, vector<vi> &chess, int n, int m)
{
    int ans = chess[r][c];
    int a = r, b = c;
    while (a > 0 and b > 0)
    {
        a--, b--;
        ans += chess[a][b];
    }
    a = r, b = c;
    while (a > 0 and b < m - 1)
    {
        a--, b++;
        ans += chess[a][b];
    }
    a = r, b = c;
    while (a < n - 1 and b < m - 1)
    {
        a++, b++;
        ans += chess[a][b];
    }
    a = r, b = c;
    while (a < n - 1 and b > 0)
    {
        a++, b--;
        ans += chess[a][b];
    }
    return ans;
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
        vector<vi> chess(n, vi(m));
        for (auto &it : chess)
            for (auto &i : it)
                cin >> i;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, daigonal(i, j, chess, n, m));
            }
        }
        cout << ans << endl;
    }
}