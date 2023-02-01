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
        int sum = 0;
        for (int &it : v)
        {
            cin >> it;
            sum += it;
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vi prefix(n), prefix1(n);
        partial_sum(all(v), prefix.begin());
        partial_sum(v.rbegin(), v.rend(), prefix1.begin());
        if ((n & 1) and prefix[n / 2 - 1] == prefix[n / 2 + 1])
        {
            cout << n - 1 << endl;
            continue;
        }
        prefix.erase(upper_bound(all(prefix), sum / 2), prefix.end());
        prefix1.erase(upper_bound(all(prefix1), sum / 2), prefix1.end());
        int ans = 0;

        int l = prefix.size() - 1, r = prefix1.size() - 1;
        while (l > -1 and r > -1)
        {
            if (prefix[l] < prefix1[r])
            {
                r--;
            }
            else if (prefix[l] == prefix1[r])
            {
                ans = prefix[l];
                break;
            }
            else
                l--;
        }
        if (ans == 0)
            cout << 0;
        else
            cout << lower_bound(all(prefix), ans) - prefix.begin() + lower_bound(all(prefix1), ans) - prefix1.begin() + 2;
        cout << endl;
    }
}