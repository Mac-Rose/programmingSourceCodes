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
        vector<vector<char>> v(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '1')
                {
                    if (i != 0 and j != m - 1)
                        if (v[i - 1][j] == '1' and v[i][j + 1] == '1' and v[i - 1][j + 1] == '0')
                        {
                            ans = false;
                            break;
                        }
                    if (i != 0 and j != 0)
                        if (v[i - 1][j] == '1' and v[i][j - 1] == '1' and v[i - 1][j - 1] == '0')
                        {
                            ans = false;
                            break;
                        }
                    if (i != n - 1 and j != 0)
                        if (v[i + 1][j] == '1' and v[i][j - 1] == '1' and v[i + 1][j - 1] == '0')
                        {
                            ans = false;
                            break;
                        }
                    if (i != n - 1 and j != m - 1)
                        if (v[i + 1][j] == '1' and v[i][j + 1] == '1' and v[i + 1][j + 1] == '0')
                        {
                            ans = false;
                            break;
                        }
                }
            }
            if (ans == false)
                break;
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}