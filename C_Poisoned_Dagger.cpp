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

ll cal(vi &v, int k)
{
    int re = 0;
    for (int i = 0; i < v.size(); i++)
    {
        re += min(v[i], k);
    }
    return re;
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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int &it : v)
            cin >> it;
        vi dif(n);
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
                dif[i] = v[i + 1] - v[i];
            else
                dif[i] = INT64_MAX;
        }
        int l = 1, r = k;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int x = cal(dif, mid);
            if (x >= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
}