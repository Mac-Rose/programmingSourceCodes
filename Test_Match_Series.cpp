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
        int s = 0;
        for (int i = 0; i < 5; i++)
        {
            int g;
            cin >> g;
            if (g == 2)
                g -= 3;
            s += g;
        }
        if (s)
        {
            if (s > 0)
                cout << "INDIA";
            else
                cout << "ENGLAND";
        }
        else
            cout << "DRAW";
        cout << endl;
    }
}