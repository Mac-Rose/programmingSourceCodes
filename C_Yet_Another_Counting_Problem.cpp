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

ll min(ll a, ll b)
{
    if (a > b)
        return b;
    else
        return a;
}
int check(int lcm, int range, int max)
{
    int rem = range / lcm;
    return rem * max + min(range, rem * lcm + max - 1) - rem * lcm + 1;
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
        int a, b, q;
        cin >> a >> b >> q;
        if (a > b)
            swap(a, b);
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            int first_multiple = a * b / __gcd(a, b);
            int ans = 0;
            ans = check(first_multiple, r, b) - check(first_multiple, l - 1, b);
            cout << r - l + 1 - ans << ' ';
        }
        cout << endl;
    }
}