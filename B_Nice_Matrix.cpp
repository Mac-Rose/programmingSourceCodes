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
        vector<vi> a(n, vi(m));
        vector<vi> a1(n, vi(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        int ans = 0;
        for (int i = 0; i < (n - 1) / 2 + 1; i++)
        {
            for (int j = 0; j < (m - 1) / 2 + 1; j++)
            {
                vi v(4);
                v[0] = a[i][j];
                v[1] = a[n - i - 1][j];
                v[2] = a[i][m - j - 1];
                v[3] = a[n - i - 1][m - 1 - j];
                sort(all(v));
                int k = (v[2] + v[1]) / 2;
                a1[i][j] = k;
                a1[n - i - 1][j] = k;
                a1[i][m - j - 1] = k;
                a1[n - i - 1][m - 1 - j] = k;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                ans += abs(a1[i][j] - a[i][j]);
        }
        cout << ans << endl;
    }
}