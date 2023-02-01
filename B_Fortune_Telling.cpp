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
        int n, x, y;
        cin >> n >> x >> y;
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            x = (x) ^ (it);
        }
        ((x & 1) == (y & 1)) ? cout << "Alice" : cout << "Bob";
        cout << endl;
    }
}