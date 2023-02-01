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

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
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
        int a, b;
        cin >> a >> b;
        int g = gcd(a, b);
        if (a == b)
        {
            cout << "1 1";
        }
        else if (a > b)
        {
            cout << "0 0";
        }
        else
        {
            if (a == 1)
                cout << 1 << ' ' << b;
            else if (g == 1)
                cout << "0 0";
            else
                cout << 1 << ' ' << b / g;
        }
        cout << endl;
    }
}