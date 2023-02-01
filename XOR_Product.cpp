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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 998244353;

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
        vi v(n);
        int one = 0;
        vi even;
        int ans = 1;
        for (int &it : v)
        {
            cin >> it;
            if (it % 2 == 0)
                even.pb(it), it = 1;
            else if (it == 1)
                one++;
            else
            {
                ans = ans * it;
                ans = ans % MOD;
            }
        }
        sort(all(even));
        int i = 0;

        while (one-- and i < even.size())
        {
            even[i]++;
            ans = ans * even[i++];
            ans = ans % MOD;
        }
        while (i < even.size())
        {
            ans = ans * even[i++];
            ans = ans % MOD;
        }
        cout << ans << endl;
    }
}