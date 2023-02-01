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
int gcdExtended(int a, int b)
{
    // Base Case
    if (a == 0)
    {
        return b;
    }

    int gcd = gcdExtended(b % a, a);
    return gcd;
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // int x = a + 1;
        int prod = a * b;
        pii ans = {-1ll, -1ll};
        int l = a + 1, h = c;
        int x = l + (h - l) / 2;
        while (x <= c and l <= h)
        {
            int g = prod / __gcd(x, prod);
            int i = 1ll;
            int G = g;
            while (G <= d)
            {
                G = g * i;
                i++;
                if ((G > b) and (G <= d) and ((x * G) % prod == 0ll))
                {
                    ans = {x, G};
                    break;
                }
            }
            if (ans.first != -1)
                break;
            if (G > d)
            {
                h = x - 1;
            }
            else
                l = x + 1;
            x = l + (h - l) / 2;
        }
        cout << ans.first << ' ' << ans.second << endl;
    }
}