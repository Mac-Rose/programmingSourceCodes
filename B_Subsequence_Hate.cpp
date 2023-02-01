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
        string a;
        cin >> a;
        int cnt = a.size();
        int ans = INT_MAX;
        int c = 0, z = 0;
        int cnt0 = count(all(a), '0');
        int cnt1 = cnt - cnt0;
        for (int i = 0; i <= cnt; i++)
        {
            if (i == 0)
                ans = min(ans, cnt1);
            else
            {
                if (a[i - 1] == '1')
                    c++;
                else
                    z++;
                ans = min(cnt0 - z + c, ans);
                ans = min(cnt1 - c + z, ans);
            }
        }
        cout << ans << endl;
    }
}