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
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }
    else if (n == 2)
    {
        cout << 2;
        exit(0);
    }
    else
    {
        int ans = 0;
        if (n & 1)
            ans = (n - 1) * n * (n - 2);
        else
            ans = max({(n - 1) * n * (n - 2) / __gcd(n - 2, (n - 1) * n), (n - 3) * (n - 1) * (n - 2) / __gcd(n - 3, (n - 1) * (n - 2))});
        cout << ans;
    }
}