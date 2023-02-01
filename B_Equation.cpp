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
    int a, b, c;
    cin >> a >> b >> c;
    int D = b * b - 4 * a * c;
    if (a == 0)
    {
        if (b == 0 and c == 0)
            cout << -1;
        else if (b == 0)
        {
            cout << 0;
        }
        else if (c == 0)
        {
            cout << "1\n0";
        }
        else
        {
            cout << "1\n";
            cout << setprecision(12) << -c * 1.0 / b;
        }
    }
    else if (D == 0)
    {
        cout << "1\n";
        cout << setprecision(12) << -b * 1.0 / (2 * a);
    }
    else if (D < 0)
    {
        cout << "0\n";
    }
    else
    {
        if (a > 0)
        {
            cout << "2\n";
            cout << setprecision(12) << (-b - sqrtl(D)) * 1.0 / (2 * a) << endl;
            cout << setprecision(12) << (-b + sqrtl(D)) * 1.0 / (2 * a);
        }
        else
        {
            cout << "2\n";
            cout << setprecision(12) << (-b + sqrtl(D)) * 1.0 / (2 * a) << endl;
            cout << setprecision(12) << (-b - sqrtl(D)) * 1.0 / (2 * a);
        }
    }
}