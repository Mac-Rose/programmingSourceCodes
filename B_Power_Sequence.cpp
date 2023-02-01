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
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    sort(all(v));
    int x = 1e15;
    int ans = x;
    int c = 1;
    for (int j = 0; j <= x; j++)
    {
        ll val = 0, pw = 1;
        for (int i = 0; i < n; i++, pw *= c)
        {
            if (pw >= x)
            {
                val = -1;
                break;
            }
            val += abs(pw - v[i]);
        }
        if (val == -1)
            break;
        ans = min(ans, val);
        c++;
    }
    cout << ans;
}
