#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first

#define S second
#define endl '\n'
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
        sort(all(v));
        vi diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = v.back() - v[i];
        }
        vi prefix(n + 1);
        for (int i = 1; i < n + 1; i++)
        {
            prefix[i] += prefix[i - 1] + diff[i - 1];
        }
        for (int i = 0; i < q; i++)
        {
            int k;
            cin >> k;
            int idx = lower_bound(all(v), k) - v.begin();
            int ans = n - idx;
            int l = 0, r = idx - 1, temp = 0;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                int req = (prefix[idx] - prefix[mid]) - ((v.back() - k) * (idx - mid));
                if (req > mid)
                {
                    l = mid + 1;
                }
                else
                {
                    temp = idx - mid;
                    r = mid - 1;
                }
            }
            ans += temp;
            cout << ans << endl;
        }
    }
}