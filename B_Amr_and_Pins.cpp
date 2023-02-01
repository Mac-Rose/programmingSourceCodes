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
    int a, b, c, d, r;
    cin >> r >> a >> b >> c >> d;
    if (b == d and a == c)
    {
        cout << 0;
        exit(0);
    }
    double dis = sqrt(pow((c - a), 2) + pow((d - b), 2));
    double ans = dis / (2 * r);
    int ans1 = ceil(ans);
    cout << ans1;
}