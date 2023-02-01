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
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

int minSubArrayLen(int target, vector<int> nums)
{
    vector<int> prefix(nums.size() + 1);
    for (int i = 1; i <= nums.size(); i++)
    {
        prefix[i] += nums[i - 1];
        prefix[i] += prefix[i - 1];
    }
    int ans = INT64_MAX;
    for (int i = 1; i <= nums.size(); i++)
    {
        auto x = lower_bound(prefix.begin(), prefix.end(), target + prefix[i - 1]);
        if (x == prefix.end())
            continue;
        int temp = x - prefix.begin() - i + 1;
        ans = min(ans, temp);
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    minSubArrayLen(7, {2, 3, 1, 2, 4, 3});
}