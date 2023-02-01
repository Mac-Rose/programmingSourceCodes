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
        int n;
        cin >> n;
        int g = -1;
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            if (g == -1)
                g = it;
            else
                g = gcd(g, it);
        }
        if (g == 1)
            cout << 0;
        else if (gcd(g, n) == 1)
            cout << 1;
        else if (gcd(g, n - 1) == 1)
            cout << 2;
        else
            cout << 3;
        cout << endl;
    }
}