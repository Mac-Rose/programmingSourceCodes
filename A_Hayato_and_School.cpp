#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

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
        vi v(n);
        for (int &it : v)
        {
            cin >> it;
            it %= 2;
        }
        // sort(all(v));
        int one = count(all(v), 1);
        int zero = count(all(v), 0);
        if (zero > 1 and one > 0)
        {
            cout << "YES\n";
            vi ans, ans1;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                {
                    ans.push_back(i);
                }
                else
                    ans1.push_back(i);
            }
            cout << ans1[0] + 1 << ' ' << ans1[1] + 1 << ' ' << ans[0] + 1;
        }
        else if (one > 2)
        {
            cout << "YES\n";
            vi ans;
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 1)
                {
                    ans.push_back(i);
                }
            }
            cout << ans[0] + 1 << ' ' << ans[1] + 1 << ' ' << ans[2] + 1;
        }
        else
            cout << "NO";
        cout << endl;
    }
}