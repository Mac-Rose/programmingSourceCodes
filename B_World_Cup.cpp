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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    if (b < a)
        swap(a, b);
    int ans = 0;
    while (a != b)
    {
        ans++;
        if (a & 1)
            a++;
        a /= 2;
        if (b & 1)
            b++;
        b /= 2;
    }
    if (1 << ans == n)
        cout << "Final!";
    else
        cout << ans;
}