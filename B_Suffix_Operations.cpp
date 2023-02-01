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
#define MOD 1000000007

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
            cin >> it;
        vi suffix(n + 1);
        for (int i = n - 1; i > 0; i--)
        {
            suffix[i] = abs(v[i] - v[i - 1]) + suffix[i + 1];
        }
        suffix.front() = suffix[1];
        int ans = suffix.front();
        for (int i = 0; i < n; i++)
        {
            if (i > 0 and i < n - 1)
            {
                ans = min(ans, suffix.front() + abs(v[i - 1] - v[i + 1]) - abs(v[i] - v[i - 1]) - abs(v[i] - v[i + 1]));
            }
            else if (i == 0)
            {
                ans = min(ans, suffix[2]);
            }
            else
            {
                ans = min(ans, suffix.front() - suffix[i]);
            }
        }
        cout << ans << endl;
    }
}