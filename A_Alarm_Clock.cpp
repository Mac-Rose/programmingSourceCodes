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

ll ceil(ll a, ll b)
{
    return (a - 1) / b + 1;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    for (int I = 0; I < tst; I++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        if (b >= a)
            cout << b;
        else
        {
            a -= b;
            ans += b;
            if (a > 0 and c - d <= 0)
            {
                ans = -1;
            }
            else if (a > 0)
            {
                ans += ceil(a, (c - d)) * c;
            }
            cout << ans;
        }
        cout << endl;
    }
}