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
        vector<vi> matrix(n, vi(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[i][j] = max({i + j, (n - i - 1) + j, (n - i - 2) + (m - j), i + (m - j - 1)});
            }
        }
        vi v;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                v.pb(matrix[i][j]);
        sort(all(v));
        for (int &it : v)
            cout << it << ' ';
        cout << endl;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //         cout << matrix[i][j] << ' ';
        //     cout << endl;
        // }
    }
}