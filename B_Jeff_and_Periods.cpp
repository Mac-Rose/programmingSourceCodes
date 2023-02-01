#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
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
    for (int &u : v)
        cin >> u;
    map<int, vi> m;
    for (int i = 0; i < n; i++)
        m[v[i]].pb(i);
    vector<pii> ans;
    for (auto &it : m)
    {
        if (it.S.size() == 1)
        {
            ans.pb({it.F, 0});
        }
        else if (it.S.size() == 2)
        {
            ans.pb({it.F, it.S[1] - it.S[0]});
        }
        else
        {
            int dif = it.S[1] - it.S[0];
            bool flag = true;
            for (int i = 1; i < it.S.size(); i++)
            {
                if (it.S[i] - it.S[i - 1] != dif)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                ans.pb({it.F, dif});
            }
        }
    }
    cout << ans.size() << endl;
    for (auto &it : ans)
        cout << it.F << ' ' << it.S << endl;
}