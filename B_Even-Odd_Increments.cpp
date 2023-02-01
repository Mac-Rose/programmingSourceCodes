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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, q;
        cin >> n >> q;
        vi v(n);
        int sum = 0, odd = 0, even = 0;
        for (int &it : v)
        {
            cin >> it;
            sum += it;
            if (it & 1)
                odd++;
            else
                even++;
        }
        while (q--)
        {
            int t, x;
            cin >> t >> x;

            if (t & 1)
            {
                sum += odd * x;
                if (x & 1)
                {
                    even += odd;
                    odd = 0;
                }
            }
            else
            {
                sum += even * x;
                if (x & 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << endl;
        }
    }
}