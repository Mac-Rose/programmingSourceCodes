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
        int n, s;
        cin >> n >> s;
        vi v(n);
        int su = 0;
        for (auto &it : v)
        {
            cin >> it;
            su += it;
        }
        if (s >= su)
            cout << 0;
        else
        {
            int temp = 0;
            int chance = 0;
            int ans = 0;
            pii mi = {INT_MIN, -1};
            for (int i = 0; i < n; i++)
            {
                temp += v[i];
                if (v[i] > mi.F)
                    mi = {v[i], i + 1};
                if ((temp > s and chance < 2) or i == n - 1)
                {
                    if (chance == 1)
                    {
                        cout << ans;
                        break;
                    }
                    temp -= mi.F;
                    ans = mi.S;
                    if (i == n - 1)
                        cout << mi.S;
                    chance++;
                    continue;
                }
            }
        }
        cout << endl;
    }
}