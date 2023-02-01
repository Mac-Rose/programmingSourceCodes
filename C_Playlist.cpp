#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;

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
    int res = 0;
    int sum = 0;
    priority_queue<ll> s;
    for (int i = n - 1; i >= 0; --i)
    {
        s.emplace(-v[i].S);
        sum += v[i].S;
        while (s.size() > k)
        {
            sum += s.top();
            s.pop();
        }

        res = max(res, sum * v[i].F);
    }

    cout << res;
}