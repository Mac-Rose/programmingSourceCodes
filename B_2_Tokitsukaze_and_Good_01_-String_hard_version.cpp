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

int helper(int ans, vi &temp)
{
    vi odd, even;
    for (int i = 0; i < temp.size(); i += 2)
    {
        odd.pb(temp[i]);
    }
    for (int i = 1; i < temp.size(); i += 2)
    {
        even.pb(temp[i]);
    }
    sort(all(odd));
    sort(all(even));
    int k = 0, i = 0, a1 = 0, a2 = 0;
    while (odd[i] + k <= ans and i < odd.size())
    {
        a1++;
        k += odd[i];
        i++;
    }
    i = 0, k = 0;
    while (even[i] + k <= ans and i < even.size())
    {
        a2++;
        k += even[i];
        i++;
    }
    return min(even.size() - a1, odd.size() - a2);
}
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
        string a;
        cin >> a;
        vi v;
        int temp = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
                v.pb(temp), temp = 1;
            else
                temp++;
        }
        v.pb(temp);
        temp = 0;
        int ans = 0;
        int cur = 0;
        for (int i = 0; i < v.size(); i++)
        {
            cur += v[i];
            if (cur & 1)
            {
                temp++;
            }
            else
                ans += temp, temp = 0;
        }
        cout << ans << ' ' << helper(ans, v) << endl;
    }
}