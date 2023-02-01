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
        int n;
        cin >> n;
        int sum = 0;
        vi v(n);
        for (auto &it : v)
        {
            cin >> it;
            sum += it;
        }
        sort(all(v));
        int req1 = (2 * sum) / n;
        double req = (2.0 * sum) / (n * 1.0);
        if (req != req1)
        {
            cout << "0\n";
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += lower_bound(v.begin() + i + 1, v.end(), req - v[i] + 1) - lower_bound(v.begin() + i + 1, v.end(), req - v[i]);
        }
        cout << ans << endl;
    }
}