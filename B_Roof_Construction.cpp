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

// Highest power of 2 less than or equal to n
ll ho2(ll x)
{

    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    x |= x >> 63;

    return x ^ (x >> 1);
}

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
        int h = ho2(n - 1);
        for (int i = h - 1; i > -1; i--)
        {
            cout << i << ' ';
        }
        for (int i = h; i < n; i++)
            cout << i << ' ';
        cout << endl;
    }
}