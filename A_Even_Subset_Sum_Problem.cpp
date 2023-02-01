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
        if (n > 1)
        {
            vi v(n);
            for (auto &it : v)
                cin >> it;
            if ((v[0] + v[1]) & 1)
            {
                cout << 1 << endl;
                if (v[0] & 1)
                    cout << 2;
                else
                    cout << 1;
            }
            else
                cout << 2 << endl
                     << 1 << " " << 2;
        }
        else
        {
            int g;
            cin >> g;
            if (g & 1)
                cout << -1;
            else
                cout << 1 << endl
                     << 1;
        }
        cout << endl;
    }
}