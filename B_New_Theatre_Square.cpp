#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
// #define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<vector<char>> v(n, vector<char>(m));
        for (auto &it : v)
        {
            for (auto &i : it)
            {
                cin >> i;
            }
        }
        int flag = 0, ans = 0;
        if (2 * x <= y)
            flag = 1;
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '.')
                    c++;
                if (v[i][j] == '*' or j == m - 1)
                {
                    if (flag)
                        ans += x * c;
                    else
                    {
                        ans += (c / 2) * y;
                        if (c & 1)
                            ans += x;
                    }
                    c = 0;
                }
            }
        }
        cout << ans << '\n';
    }
}