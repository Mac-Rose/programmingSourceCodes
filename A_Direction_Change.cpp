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
        int a, b;
        cin >> a >> b;
        if (a == 1 and b == 1)
            cout << "0";
        else if (a * b == 2)
            cout << 1;
        else if (a == 1 or b == 1)
            cout << -1;
        else
        {
            int ans = 2 * min(a, b) - 2 + 2 * (max(a, b) - min(a, b));
            if ((max(a, b) - min(a, b)) & 1)
                ans--;
            cout << ans;
        }
        cout << endl;
    }
}