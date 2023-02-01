#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        vector<vector<char>> c(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }
        int ans = 0;
        for (int j = 0; j < m - 1; j++)
            if (c[n - 1][j] == 'D')
                ans++;
        for (int j = 0; j < n - 1; j++)
            if (c[j][m - 1] == 'R')
                ans++;
        cout << ans << endl;
    }
}