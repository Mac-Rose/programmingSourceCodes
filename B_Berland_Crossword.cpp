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
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;
        int u1 = u;
        int r1 = r;
        int l1 = l;
        int d1 = d;
        if (u == n)
        {
            l1--;
            r1--;
        }
        if (d == n)
        {
            l1--;
            r1--;
        }
        if (l == n)
        {
            d1--;
            u1--;
        }
        if (r == n)
        {
            d1--;
            u1--;
        }

        if (u == n - 1)
        {
            if (l1 > r1)
            {
                l1--;
            }
            else
            {
                r1--;
            }
        }
        if (d == n - 1)
        {
            if (l1 > r1)
            {
                l1--;
            }
            else
            {
                r1--;
            }
        }
        if (l == n - 1)
        {
            if (u1 > d1)
            {
                u1--;
            }
            else
            {
                d1--;
            }
        }
        if (r == n - 1)
        {
            if (u1 > d1)
            {
                u1--;
            }
            else
            {
                d1--;
            }
        }
        if (l1 < 0 or u1 < 0 or d1 < 0 or r1 < 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}