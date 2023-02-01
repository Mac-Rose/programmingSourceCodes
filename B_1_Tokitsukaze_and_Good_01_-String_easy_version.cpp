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
        string a;
        cin >> a;
        vi v;
        int temp = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                v.pb(temp), temp = 1;
            else
                temp++;
        }
        v.pb(temp);
        temp = 0;
        int ans = 0;
        int cur = 0;
        for (int i = 0; i < v.size(); i++)
        {
            cur += v[i];
            if (cur & 1)
            {
                temp++;
            }
            else
                ans += temp, temp = 0;
        }
        cout << ans << ' ' << min(ans / 2, ans - ans / 2) << endl;
    }
}