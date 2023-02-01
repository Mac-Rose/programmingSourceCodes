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
    // int tst;
    // cin >> tst;
    // while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            v[i] = g;
        }
        sort(all(v));
        int l = 0, r = n - 1;
        int ans = 0, ans1 = 0;
        while (l < r)
        {
            ans += v[r];
            ans1 += v[l];
            l++, r--;
        }
        if (n & 1)
            ans += v[n / 2];
        cout << ans * ans + ans1 * ans1;
    }
}