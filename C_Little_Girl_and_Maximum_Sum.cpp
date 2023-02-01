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
    int n, q;
    cin >> n >> q;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    vi prefix(n + 2);
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        prefix[l]++;
        prefix[r + 1]--;
    }
    partial_sum(all(prefix), prefix.begin());
    sort(all(v), greater<>());
    sort(all(prefix), greater<>());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += prefix[i] * v[i];
    }
    cout << ans;
}