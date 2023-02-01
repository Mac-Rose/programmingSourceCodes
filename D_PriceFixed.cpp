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
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].S >> v[i].F;
    }
    sort(all(v));
    int start = 0, end = n - 1;
    int exp = 0;
    int ans = 0;
    while (start <= end)
    {
        if (exp >= v[start].F)
        {
            ans += v[start].S;
            exp += v[start].S;
            start++;
        }
        else
        {
            int req = v[start].F - exp;
            req = min(v[end].S, req);
            v[end].S -= req;
            ans += 2 * req;
            exp += req;
            if (v[end].S == 0)
                end--;
        }
    }
    cout << ans;
}