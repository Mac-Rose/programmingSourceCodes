#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
int maximumTastiness(vector<int> &price, int k)
{
    int n = price.size();
    sort(price.begin(), price.end());
    int l = 0, r = 20;
    int ans;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int i = k - 1;
        int cur = 0, asdf = 0;
        while (asdf < n and i--)
        {
            asdf = lower_bound(price.begin() + cur, price.end(), price[cur] + mid) - price.begin();
            cur = asdf;
        }
        if (i < 0)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi price{13, 5, 1, 8, 21, 2};
    cout << maximumTastiness(price, 3);
}