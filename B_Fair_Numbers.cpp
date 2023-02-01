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

bool check(int a)
{
    int A = a;
    int t = 1;
    for (int i = 0; a > 0; i++)
    {
        if (a % 10)
        {
            t /= __gcd(t, a % 10);
            t *= a % 10;
        }
        a /= 10;
    }
    if (A % t == 0)
        return true;
    else
        return false;
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
        while (!check(n))
            n++;
        cout << n << '\n';
    }
}