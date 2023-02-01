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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            n--;
            if (n % 4 == 0)
            {
                n /= 2;
                cout << n - 1 << ' ' << n + 1 << " 1\n";
            }
            else
            {
                n /= 2;
                cout << n - 2 << ' ' << n + 2 << " 1\n";
            }
        }
        else
        {
            int x = (n - 1) / 2;
            int y = n - 1 - x;
            cout << x << ' ' << y << " 1" << endl;
        }
    }
}