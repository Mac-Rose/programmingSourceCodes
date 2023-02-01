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
        int N = n;
        if (n == 1)
        {
            cout << 3 << endl;
            continue;
        }
        int ans = 0;
        int k = 0;
        while (n)
        {
            if (n & 1)
            {
                ans = (1 << k);
                break;
            }
            k++;
            n >>= 1;
        }
        if ((ans ^ N) > 0 and (ans && N) > 0)
            cout << ans << endl;
        else
            cout << ans + 1 << endl;
    }
}