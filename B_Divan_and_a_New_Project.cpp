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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<pii> v;
        for (int i = 1; i <= n; i++)
        {
            int g;
            cin >> g;
            v.pb({g, i});
        }
        sort(all(v), greater<>());
        vi ans(n + 1);
        ans[0] = 0;
        int k = 1, temp = 0;
        for (int i = 1; i <= n; i++)
        {
            ans[v[i - 1].S] = k;
            temp += 2 * v[i - 1].F * abs(k);
            if (i & 1)
                k -= (i + 1);
            else
                k += (i + 1);
        }
        cout << temp << endl;
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}