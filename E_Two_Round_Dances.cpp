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

int c(int n, int r)
{
    if (r > n)
        return 0;
    r = min(r, n - r);
    int x = 1, y = 1;
    for (int i = 1; i <= r; i++)
    {
        x *= n;
        y *= i;
        int g = __gcd(x, y);
        x /= g;
        y /= g;
        n--;
    }
    return x;
}

ll fact(int n)
{
    int re = n;
    while (n > 1)
    {
        n--;
        re *= n;
    }
    return re;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n == 2)
    {
        cout << 1;
        exit(0);
    }
    int ans = c(n, n / 2) / 2 * pow(fact(n / 2 - 1), 2);
    cout << ans;
}