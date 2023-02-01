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
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        pii ans = {1, 1};
        int templ = 0, tempu = 0, lm = 0, rm = 0, um = 0, dm = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'L')
                templ--, lm = min(lm, templ);
            else if (a[i] == 'R')
                templ++, rm = max(rm, templ);
            else if (a[i] == 'U')
                tempu--, um = min(um, tempu);
            else
                tempu++, dm = max(dm, tempu);
            if (rm - lm >= m or dm - um >= n)
                break;
            else
            {
                ans = {1 - um, 1 - lm};
            }
        }
        cout << ans.F << ' ' << ans.S << endl;
    }
}