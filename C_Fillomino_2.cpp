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
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    vector<vi> ans(n, vi(n));
    for (int i = n - 1; i > -1; i--)
    {
        int k = 1;
        int a = i, b = i;
        ans[a][b] = v[i];
        while (k != v[i])
        {
            if (b != i and ans[a][b + 1] == 0)
            {
                k++;
                ans[a][b + 1] = v[i];
                b++;
            }
            else if (a != n - 1 and ans[a + 1][b] == 0)
            {
                k++;
                ans[a + 1][b] = v[i];
                a++;
            }
            else if (b != 0 and ans[a][b - 1] == 0)
            {
                k++;
                ans[a][b - 1] = v[i];
                b--;
            }
            else if (a != 0 and ans[a - 1][b] == 0)
            {
                k++;
                ans[a - 1][b] = v[i];
                a--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
}