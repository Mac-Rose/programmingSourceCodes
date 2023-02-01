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
    int n, m, k;
    cin >> n >> m >> k;
    int K = k;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    int x = *min_element(all(v));
    int val = k / x;
    k %= x;
    vi d(m);
    for (auto &it : d)
        cin >> it;
    k += val * (*max_element(all(d)));
    cout << max(k, K);
}