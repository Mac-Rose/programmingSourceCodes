#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
    vi m(3 * 10e5 + 5, 0);
    m[1] = 0;
    m[2] = 1;
    for (int i = 3; i < 3 * 10e5 + 5; i++)
    {
        m[i] = m[i - 1] ^ (i - 1);
    }
    while (tst--)
    {
        int a, b;
        cin >> a >> b;
        if (m[a] == b)
            cout << a;
        else if ((m[a] ^ b) != a)
            cout << a + 1;
        else
            cout << a + 2;
        cout << endl;
    }
}