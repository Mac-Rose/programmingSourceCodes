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
        int x, n;
        cin >> x >> n;
        int m = n / 4;
        if (x & 1)
        {
            if (n % 4 == 0)
                ;
            else if (n % 4 == 1)
                x += m * 4 + 1;
            else if (n % 4 == 2)
                --x;
            else
                --x, x -= m * 4 + 3;
        }
        else
        {
            if (n % 4 == 0)
                ;
            else if (n % 4 == 1)
                x -= m * 4 + 1;
            else if (n % 4 == 2)
                x++;
            else
            {
                x++;
                x += m * 4 + 3;
            }
        }
        cout << fixed << x << endl;
    }
}