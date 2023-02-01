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
        int n, l, r;
        cin >> n >> l >> r;
        vi v(n);
        for (auto &it : v)
        {
            cin >> it;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int r1 = upper_bound(all(v), r - v[i]) - v.begin();
            int l1 = lower_bound(all(v), l - v[i]) - v.begin();
            if (i >= l1 and i < r1)
                l1++;
            ans += r1 - l1;
        }
        cout << ans / 2 << endl;
    }
}