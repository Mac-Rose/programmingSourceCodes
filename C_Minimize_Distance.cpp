#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        int ans = 0;
        if (v.back() * v.front() > 1)
        {
            for (int i = 0; i < n; i++)
            {
                v[i] = abs(v[i]);
            }
            sort(all(v));
            int m = n - 1;
            while (m >= 0)
            {
                ans += 2 * v[m];
                m -= k;
            }
            ans -= v.back();
            cout << ans;
        }
        else
        {
            if (abs(v.back()) > abs(v.front()))
            {
                int j = upper_bound(all(v), 0) - v.begin();
                int m = 0;
                while (m < j)
                {
                    ans += abs(2 * v[m]);
                    m += k;
                }
                m = n - 1;
                while (m >= j)
                {
                    ans += 2 * v[m];
                    m -= k;
                }
                ans -= v.back();
            }
            else
            {
                int j = upper_bound(all(v), 0) - v.begin();
                int m = n - 1;
                while (m >= j)
                {
                    ans += abs(2 * v[m]);
                    m -= k;
                }
                m = 0;
                while (m < j)
                {
                    ans += abs(2 * v[m]);
                    m += k;
                }
                ans -= abs(v.front());
            }
            cout << ans;
        }
        cout << endl;
    }
}