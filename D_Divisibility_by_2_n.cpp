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
int const MOD = 1000000007;
ll ho2(ll x)
{
    int i = 0;
    while ((1 << i) < x)
        i++;
    if ((1 << i) == x)
        return i;
    return i - 1;
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
        int n;
        cin >> n;
        vi v(n);
        int prod = 1;
        int cnt = 0;
        for (int &it : v)
        {
            cin >> it;
            while (it % 2 == 0)
            {
                cnt++;
                it >>= 1;
            }
        }
        if (cnt >= n)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            int x = ho2(n);
            n -= cnt;
            int ans = 0;
            while (n > 0 and x > 0)
            {
                ans++;
                n -= x;
                x--;
            }
            if (n > 0)
                cout << -1;
            else
                cout << ans;
            cout << endl;
        }
    }
}