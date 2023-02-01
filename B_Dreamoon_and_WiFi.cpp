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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    int n = 0, p = 0;
    for (auto it : a)
        if (it == '+')
            p++;
        else
            n++;
    int n1 = 0, p1 = 0, q = 0;
    for (auto it : b)
        if (it == '+')
            p1++;
        else if (it == '-')
            n1++;
        else
            q++;
    if (n1 > n or p1 > p)
    {
        cout << 0;
    }
    else if (n1 <= n and p1 <= p)
    {
        cout << setprecision(12) << (c(q, n - n1) * 1.0 / (1 << q));
    }
    else
        cout << 1;
}