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
vector<pair<int, int>> reg;
int n;
vector<int> dp;
int lower_bound(vector<pair<int, int>> &v, int index)
{
    int ans = n, target = v[index].second;
    int l = index + 1, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid].first >= target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
int solve(int index, vector<int> &profit)
{
    if (index >= n)
        return 0;
    if (dp[index])
        return dp[index];

    int ind = lower_bound(reg, index);
    dp[index] = max(profit[index] + solve(ind, profit), solve(index + 1, profit));
    return dp[index];
}
int jobScheduling(vector<int> &startTime, vector<int> &endTime, vector<int> &profit)
{
    n = startTime.size();
    dp.resize(n);
    for (int i = 0; i < n; i++)
        reg.push_back({startTime[i], endTime[i]});
    sort(reg.begin(), reg.end());

    return solve(0, profit);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi start, end, profit;
    start = {1, 2, 2, 3};
    end = {2, 5, 3, 4};
    profit = {3, 4, 1, 2};
    cout << jobScheduling(start, end, profit);
}