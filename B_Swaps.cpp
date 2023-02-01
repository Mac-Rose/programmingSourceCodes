#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        vi a(n), b(n);
        vi index(2 * n, -1);
        map<int, int> sub;
        for (auto &it : a)
        {
            cin >> it;
            index[it] = &it - &a[0];
        }
        for (auto &it : b)
        {
            cin >> it;
            sub[it] = &it - &b[0];
        }
        for (int i = 2 * (n - 1); i > -1; i--)
        {
            sub[i] = min(sub[i], sub[i + 2]);
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x = index[2 * i + 1];
            x += sub[2 * (i + 1)];
            ans = min(x, ans);
        }
        cout << ans << endl;
    }
}