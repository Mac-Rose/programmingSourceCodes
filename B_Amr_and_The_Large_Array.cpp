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
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    map<int, vi> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]].pb(i + 1);
    }
    int ma = INT_MIN, diff = INT_MAX;
    pii ans;
    for (auto it : m)
    {
        int x = it.S.size();
        if (x > ma)
        {
            ma = x;
            diff = it.S.back() - it.S.front();
            ans = {it.S.front(), it.S.back()};
        }
        else if (x == ma)
        {
            ma = x;
            if (it.S.back() - it.S.front() < diff)
            {
                diff = it.S.back() - it.S.front();
                ans = {it.S.front(), it.S.back()};
            }
        }
    }
    cout << ans.F << " " << ans.S;
}