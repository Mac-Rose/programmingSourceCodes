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

double abs(double a, double b)
{
    if (a - b < 0)
        return b - a;
    else
        return a - b;
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
        int h, c, k;
        cin >> h >> c >> k;
        int mx = h;
        int mn = (h + c) / 2;

        if (k >= mx)
        {
            cout << 1 << '\n';
        }
        else if (k <= mn)
        {
            cout << 2 << '\n';
        }
        else
        {
            double b = ((h - k) * (1.0)) / ((k - c) - (h - k));
            int small = b;
            double ans1 = ((1.0) * (h * (small + 1)) + (c * (small))) / ((2 * (small)) + 1);
            small++;
            double ans2 = ((1.0) * (h * (small + 1)) + (c * (small))) / ((2 * (small)) + 1);

            if (abs(ans1, k) <= abs(ans2, k))
            {
                small--;
            }

            cout << (small * 2) + 1 << '\n';
        }
    }
}