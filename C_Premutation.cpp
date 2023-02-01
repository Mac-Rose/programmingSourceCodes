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
vector<int> searchRange(vector<int> nums, int target)
{
    vector<int> ans(2, -1);
    if (nums.empty())
        return ans;
    ans.back() = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
    ans.front() = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if (nums[ans.back()] != target)
        return {-1, -1};
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    searchRange({5, 7, 7, 8, 8, 10}, 8);
}