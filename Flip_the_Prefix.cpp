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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        vi sign(n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                sign[i]++;
        }
        partial_sum(all(sign), sign.begin());
        int ans = INT_MAX;
        for (int i = 0; i <= n - k; i++)
        {
            if (a[i + k - 1] == '1')
            {
                ans = min(ans, sign[i + k - 1] - sign[i]);
            }
            else
                ans = min(ans, sign[i + k - 1] - sign[i] + 1);
        }
        cout << ans << endl;
    }
}