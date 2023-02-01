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
        int n, m, a, b, c, d;
        cin >> n >> m >> a >> b >> c >> d;

        int ans = 0;
        int g = 1, h = 1;
        while (a != c and b != d)
        {
            if (b == m or b == 0)
                h *= -1;
            b += h;
            if (a == n or a == 0)
                g *= -1;
            a += g;
            ans++;
        }
        cout << ans << endl;
    }
}