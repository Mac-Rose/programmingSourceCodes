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
        int n, k;
        cin >> n >> k;
        if (n & 1)
        {
            if (k > ((n - 1) / 2 + 1))
                cout << 2 * (n / 2);
            else if (k == ((n - 1) / 2 + 1))
                cout << 2 * ((n - 1) / 2 + 1);
            else
                cout << 2 * (n - k);
        }
        else
        {
            if (k > n / 2)
                cout << n;
            else
                cout << 2 * (n - k);
        }
        cout << endl;
    }
}