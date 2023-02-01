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
    int n, k;
    cin >> n >> k;
    vector<pii> v(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[i] = {r, l};
    }
    sort(all(v));
    vi prefix(n + 1);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] += prefix[i - 1] + v[i - 1].S;
    }
    int ans = -1, temp;
    for (int i = 0; i < n; i++)
    {
        temp = prefix[min(i + 1 + k, n)] - prefix[i];
        if (temp * v[i].F > ans)
            ans = temp * v[i].F;
    }
    cout << ans;
}