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
        vi v(n);
        for (int &it : v)
            cin >> it;
        multiset<int> s;
        int sum = 0;
        int ans = 0;
        for (int i = k; i < n; i++)
        {
            sum += v[i];
            s.emplace(v[i]);
            if (sum < 0)
            {
                ans++;
                sum -= 2 * (*s.begin());
                s.erase(s.begin());
            }
        }
        s.clear();
        sum = 0;
        for (int i = k - 1; i > 0; i--)
        {
            sum -= v[i];
            s.emplace(-v[i]);
            if (sum < 0)
            {
                ans++;
                sum -= 2 * (*s.begin());
                s.erase(s.begin());
            }
        }
        cout << ans << Endl;
    }
}