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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ans;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0 and lcm(i, n / i) == n)
        {
            ans = i;
        }
    }
    cout << ans << ' ' << n / ans;
}