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
        for (int &it : v)
            cin >> it;
        v.erase(unique(all(v)), v.end());
        sort(all(v));
        int ma = *max_element(all(v));
        int idx = upper_bound(all(v), ma) - v.begin();
        int prev = 0;
        idx--;
        int ans = 0;
        for (int i = idx; i > -1; i--)
        {
            ans += ma - v[i] - prev;
            prev = ma - v[i];
        }
        cout << ans << endl;
    }
}