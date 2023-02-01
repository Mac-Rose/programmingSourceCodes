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
        int e, t;
        cin >> e >> t;
        if (t <= k)
            v[i] = {e, t};
        else
            v[i] = {e - (t - k), t};
    }
    sort(all(v));
    cout << v.back().F;
}