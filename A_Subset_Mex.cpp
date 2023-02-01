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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        vi v(n), m(101, 0);
        for (auto &it : v)
            cin >> it;
        v.pb(n + 1);
        int ans = 0;
        for (int i = 0; i < n + 1; i++)
        {
            m[v[i]]++;
        }
        int flag = 0;
        for (int i = 0; i < 101; i++)
        {
            if (m[i] == 1 and flag == 0)
            {
                flag = 1;
                ans += i;
            }
            else if (m[i] == 0)
            {
                ans += i;
                if (flag == 0)
                    ans += i;
                break;
            }
        }
        cout << ans << endl;
    }
}