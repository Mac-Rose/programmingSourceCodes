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

vector<vector<int>> threeSum(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int n = nums.size();
    int i = 0;
    while (i < n)
    {
        if (i != n - 1)
        {
            if (nums[i] == nums[i + 1])
            {
                if (binary_search(nums.begin(), nums.end(), -2 * nums[i]) == true)
                    ans.push_back({nums[i], nums[i], -2 * nums[i]});
            }
        }
        int j = i;
        while (j < n)
        {
            j = upper_bound(nums.begin() + j, nums.end(), nums[j]) - nums.begin();
            if (j >= n or nums[j] > 0)
                break;
            if (binary_search(nums.begin() + j + 1, nums.end(), -nums[i] - nums[j]) == true)
                ans.push_back({nums[i], nums[j], -nums[i] - nums[j]});
        }
        i = upper_bound(nums.begin() + i, nums.end(), nums[i]) - nums.begin();
    }
    return ans;
}
signed main()
{
    threeSum({-1, 0, 1, 2, -1, -4});
}