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
        int n, m;
        cin >> n >> m;
        if (n != m)
        {
            if (n > m)
                swap(n, m);
            if ((m - n) & 1)
                cout << -1;
            else
                cout << 2;
        }
        else if (n == 0)
            cout << 0;
        else
            cout << 1;
        cout << endl;
    }
}