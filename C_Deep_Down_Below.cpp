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
        vector<pii> cav_val(n, {0, 0});
        for (int i = 0; i < n; i++)
        {
            int q;
            cin >> q;
            int temp;
            cin >> temp;
            temp++;
            int ans = temp;
            int g;
            for (int j = 1; j < q; j++)
            {
                cin >> g;
                if (g >= temp)
                {
                    ans += (g - temp);
                    temp += (g - temp);
                }
                temp++;
            }
            cav_val[i] = {ans, q};
        }
        sort(all(cav_val));
        int ans = cav_val[0].F;
        int temp = cav_val[0].F + cav_val[0].S;
        for (int i = 1; i < n; i++)
        {
            if (cav_val[i].F >= temp)
            {
                ans += (cav_val[i].F - temp);
                temp += (cav_val[i].F - temp);
            }
            temp += cav_val[i].S;
        }
        cout << ans << endl;
    }
}