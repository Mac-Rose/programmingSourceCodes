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
        int n, x;
        cin >> n >> x;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        sort(all(v), greater<int>());
        int ans = 0;
        if (v[0] > x)
        {
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == x)
                {
                    ans = 1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                ans = 2;
        }
        else
        {
            ans = x / v[0];
            x %= v[0];
            if (x != 0)
                ans++;
        }
        cout << ans << endl;
    }
}