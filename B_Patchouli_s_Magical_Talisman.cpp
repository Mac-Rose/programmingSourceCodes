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
        vi v(n);
        int co = 0;
        vi ce;
        for (int &it : v)
        {
            cin >> it;
            if (it & 1)
                co++;
            else
                ce.pb(it);
        }
        if (co)
        {
            cout << n - co << endl;
        }
        else
        {
            int ans;
            int ma = INT64_MAX;
            for (int i = 0; i < ce.size(); i++)
            {
                int temp = 0;
                while ((ce[i] & 1) == 0)
                {
                    temp++;
                    ce[i] >>= 1;
                }
                if (temp < ma)
                    ma = temp;
            }
            ans = ma;
            ans += n - 1;
            cout << ans << endl;
        }
    }
}