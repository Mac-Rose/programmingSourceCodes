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
        int n, m;
        cin >> n >> m;
        int temp_ans = min(n, m);
        n -= temp_ans, m -= temp_ans;
        int bache_hue = max(n, m);
        bache_hue /= 2;
        int ans = min(bache_hue, temp_ans);
        if (ans == bache_hue)
        {
            temp_ans -= bache_hue;
            ans += temp_ans / 2;
        }
        cout << ans << endl;
    }
}