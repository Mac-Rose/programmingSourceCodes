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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n + 1);
        vector<vi> reg(n + 1, vi(n + 1));
        for (int i = 1; i <= n; i++)
        {
            int g;
            cin >> g;
            v[i] = g;
            reg[i][g]++;
            for (int j = 0; j <= n; j++)
                reg[i][j] += reg[i - 1][j];
        }
        int ans = 0;
        for (int k = 1; k < n; k++)
        {
            for (int m = k + 1; m < n; m++)
            {
                int temp = reg[k - 1][v[m]] * (reg.back()[v[k]] - reg[m][v[k]]);
                ans += temp;
            }
        }
        cout << ans << endl;
    }
}