#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        string a;
        cin >> a;
        int x = a.find("ab");
        if (x == -1)
        {
            int y = a.find("ba");
            if (y == -1)
                cout << -1 << " " << -1;
            else
                cout << y + 1 << " " << y + 2;
        }
        else
            cout << x + 1 << " " << x + 1 + 1;
        cout << endl;
    }
}