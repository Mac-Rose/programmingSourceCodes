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

class Solution
{
public:
    int check(int mid, vector<int> &nums)
    {
        int ans = 0;
        for (int &it : nums)
            ans += (it - 1) / mid;
        return ans;
    }
    int minimumSize(vector<int> nums, int k)
    {
        int ans = 0;
        int l = 1, r = 7;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (check(mid, nums) > k)
                l = mid + 1;
            else
                ans = mid, r = mid - 1;
        }
        return ans;
    }
};
signed main()
{
    Solution obj;
    obj.minimumSize({9}, 2);
}