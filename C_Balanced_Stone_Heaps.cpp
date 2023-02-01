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

bool helper(int x, vi &v, vi &V)
{
    int n = v.size();
    for (int i = n - 1; i > 1; i--)
    {
        if (v[i] < x)
            return false;
        int d = min(v[i] - x, V[i]);
        d /= 3;
        if (i < 2)
            continue;
        v[i] -= 3 * d;
        v[i - 1] += d;
        v[i - 2] += 2 * d;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] < x)
            return false;
    }
    return true;
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
        int n;
        cin >> n;
        vi v(n);
        vi V;
        for (int &it : v)
            cin >> it;
        V = v;
        int l = *min_element(all(v));
        int r = *max_element(all(v));
        int ans = l;
        while (r >= l)
        {
            int mid = l + (r - l) / 2;
            if (helper(mid, v, V) == true)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
            v = V;
        }
        cout << ans << endl;
    }
}