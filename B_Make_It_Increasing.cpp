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

int check(int a, int b)
{
    int ans = 0;
    int l = 0, r = 33;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a / (1ll << mid) >= b)
        {
            l = mid + 1;
        }
        else
            ans = mid, r = mid - 1;
    }
    return ans;
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
        for (int &it : v)
            cin >> it;
        if (n != 1 and v.back() == 0)
        {
            cout << "-1\n";
            continue;
        }
        int ans = 0;
        for (int i = n - 2; i > -1; i--)
        {
            int a = check(v[i], v[i + 1]);
            ans += a;
            v[i] /= (1ll << a);
            if (i != 0 and v[i] == 0)
            {
                ans = -1;
                break;
            }
            if (ans == -1)
                break;
        }
        cout << ans << endl;
    }
}