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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int w, h;
        cin >> w >> h;
        int f;
        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                int g;
                cin >> g;
                if (j == 0)
                    f = g;
                else if (j == k - 1)
                    f = g - f;
            }
            if (i < 2)
                ans = max(ans, f * h);
            else
                ans = max(ans, f * w);
        }
        cout << ans << endl;
    }
}