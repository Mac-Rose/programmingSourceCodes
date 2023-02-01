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
int n;
int calculate(int idx, vector<int> &nums, int maxOR)
{
    if (idx == n and maxOR == 0)
        return 1;
    if (idx >= n)
        return 0;
    if (maxOR == 0)
        return (1 << (n - idx));

    int newMaxOR = maxOR;
    for (int i = 0; i < 3; i++)
    {
        if (((maxOR >> i) & 1) and ((nums[idx] >> i) & 1))
            newMaxOR ^= (1 << i);
    }
    return calculate(idx + 1, nums, maxOR) + calculate(idx + 1, nums, newMaxOR);
}
int countMaxOrSubsets(vector<int> &nums)
{
    n = nums.size();
    int maxOR = 0;
    for (int i = 0; i < n; i++)
    {
        maxOR = maxOR | nums[i];
    }
    int ans = calculate(0, nums, maxOR);
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi v = {2, 2, 2};
    cout << countMaxOrSubsets(v);
}