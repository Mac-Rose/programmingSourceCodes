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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        if (b < l or b > r)
        {
            cout << -1 << endl;
            continue;
        }
        if (a > b)
            swap(a, b);

        // a can only increase
        if (b - a >= x)
            cout << 1 << endl;
        else if (b + x <= r)
            cout << 2 << endl;
        else if (a + x > r and a - x < l)
        {
            cout << -1 << endl;
        }
        else if (a - x >= l)
        {
            cout << 2 << endl;
        }
        else if (b - x >= l and r - x >= l)
        {
            cout << 3 << endl;
        }
        else
            cout << -1 << endl;
    }
}