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
        if (a * a + b * b)
        {
            if (sqrtf(a * a + b * b) == sqrt(a * a + b * b))
                cout << 1;
            else if (a * b)
                cout << 2;
            else
                cout << 1;
        }
        else
            cout << 0;
        cout << endl;
    }
}