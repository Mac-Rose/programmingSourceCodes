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

int diff(string a, string b)
{
    int ans = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
    }
    return ans;
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
        int n, k;
        cin >> n >> k;
        vector<string> v(n);
        for (auto &it : v)
            cin >> it;
        sort(all(v));
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = min(ans, diff(v[i], v[j]));
            }
        }
        cout << ans << endl;
    }
}