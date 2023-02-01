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

int findMin(vector<int> nums)
{
    int ans = nums.front();
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[l] == nums[mid])
        {
            while (l <= mid and nums[l] == nums[mid])
                l++;
        }
        else if (nums[l] < nums[mid])
        {
            l = mid + 1;
        }
        else
        {
            ans = nums[mid];
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
    cout << findMin({2, 2, 2, 0, 1});
}