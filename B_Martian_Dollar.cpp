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
    int n, d;
    cin >> n >> d;
    int ans = 0;
    vi maxP(n + 1), v(n);
    for (int &it : v)
        cin >> it;
    maxP.back() = v.back();
    for (int i = n - 1; i > -1; i--)
    {
        maxP[i] = max(v[i], maxP[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        int bought = d / v[i];
        ans = max(ans, bought * maxP[i + 1] + d % v[i]);
    }
    cout << ans << endl;
}