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
        if (n & 1)
            cout << -1;
        else if (n < 4)
            cout << -1;
        else
        {
            int ma, mi;
            if (n % 6 == 0)
            {
                mi = n / 6;
            }
            else if (n % 6 == 2)
            {
                mi = (n - 8) / 6 + 2;
            }
            else
                mi = n / 6 + 1;
            if (n % 4 == 0)
                ma = n / 4;
            else if (n % 4 == 2)
            {
                ma = (n - 6) / 4 + 1;
            }
            cout << mi << ' ' << ma;
        }
        cout << endl;
    }
}