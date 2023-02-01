#include <bits/stdc++.h>
using namespace std;

// #define int long long
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

vi findMaximumValue(vi prices, vi pos, vi amount)
{
    int n = prices.size();
    vector<int> prefix(n + 1);

    for (int i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + prices[i - 1];
    }
    int q = amount.size();
    vi ans(q);
    int i = 0;
    while (i < q)
    {
        int req = prefix[pos[i] - 1] + amount[i];
        int idx = upper_bound(prefix.begin() + pos[i], prefix.end(), req) - (prefix.begin() + pos[i]);
        idx = max(0, idx);
        ans[i] = idx;
        i++;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi price = {1, 2, 2, 2, 3};
    vi pos = {2, 5};
    vi amnt = {5, 2};
    vi v = findMaximumValue(price, pos, amnt);
    for (int &it : v)
        cout << it << ' ';
}