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
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (y1 == y2 and y3 < y1)
        {
            cout << abs(x2 - x1);
        }
        else if (y1 == y3 and y2 < y1)
        {
            cout << abs(x1 - x3);
        }
        else if (y2 == y3 and y1 < y2)
        {
            cout << abs(x2 - x3);
        }
        else
            cout << 0;
        cout << endl;
    }
}