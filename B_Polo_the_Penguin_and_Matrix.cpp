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

int helper(int n, vi &v, int d)
{
    int ans = 0;
    for (int &it : v)
        ans += abs(it - v[n]) / d;
    return ans;
}

void ternary_search(vi &v, int n, int d)
{
    int l = 0, r = n - 1;
    int ans = 0;
    while (l <= r)
    {
        int mid1 = helper(l + (r - l) / 3, v, d);
        int mid2 = helper(r - (r - l) / 3, v, d);
        if (mid1 < mid2)
        {
            r = r - (r - l) / 3 - 1;
            ans = mid1;
        }
        else
        {
            l = l + (r - l) / 3 + 1;
            ans = mid2;
        }
    }
    cout << ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, d;
    cin >> n >> m >> d;
    n *= m;
    vi v(n);
    for (int &it : v)
        cin >> it;
    sort(all(v));
    int temp = v.front() % d;
    for (int &it : v)
    {
        if (it % d != temp)
        {
            cout << -1;
            exit(0);
        }
    }
    ternary_search(v, n, d);
}