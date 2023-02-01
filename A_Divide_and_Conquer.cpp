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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        if (accumulate(all(v), 0ll) & 1)
            ;
        else
        {
            cout << 0 << endl;
            continue;
        }
        int ans = INT_MAX;
        for (int &it : v)
        {
            int temp = 0;
            if (it & 1)
            {
                while (it % 2)
                {
                    it >>= 1;
                    temp++;
                }
            }
            else
            {
                while (it % 2 == 0)
                {
                    it >>= 1;
                    temp++;
                }
            }
            ans = min(ans, temp);
        }
        cout << ans << endl;
    }
}