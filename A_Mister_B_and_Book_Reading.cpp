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
    int c, v0, v1, l, a;
    cin >> c >> v0 >> v1 >> a >> l;
    int ans = 1;
    c -= v0;
    while (c > 0)
    {
        c -= min(v0 + ans * a - l, v1 - l);
        ans++;
    }
    cout << ans;
}