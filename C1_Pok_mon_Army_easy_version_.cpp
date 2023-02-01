#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

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
        for (auto &it : v)
            cin >> it;
        int k = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (k == 0)
                    ans += v[i];
                break;
            }

            if (v[i + 1] < v[i] and k == 0)
            {
                ans += v[i];
                k = 1;
            }
            else if (v[i + 1] > v[i] and k == 1)
            {
                ans -= v[i];
                k = 0;
            }
        }
        cout << ans << endl;
    }
}