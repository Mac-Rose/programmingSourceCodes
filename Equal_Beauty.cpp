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
        int n;
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        sort(all(v));
        int ans = INT64_MAX;
        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            ans = min({ans, v[1] - v[0], v[2] - v[1]});
        }
        int l = 1, r = n - 2;
        while (l < r)
        {
            int dif1 = v[r] - v[0];
            int dif2 = v[n - 1] - v[l];
            ans = min(ans, abs(dif1 - dif2));
            if (dif1 > dif2)
                r--;
            else
                l++;
        }
        cout << ans << endl;
    }
}