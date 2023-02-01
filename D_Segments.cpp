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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        v[i] = {l, r};
    }
    sort(all(v));
    vi ans;
    int l = v.front().F, r = v.front().S;
    for (int i = 1; i < n; i++)
    {
        if (v[i].F > r)
        {
            ans.pb(l);
            l = v[i].F;
            r = v[i].S;
        }
        else
        {
            l = max(v[i].F, l);
            r = min(v[i].S, r);
        }
    }
    ans.pb(l);
    cout << ans.size() << endl;
    for (int &it : ans)
        cout << it << ' ';
}