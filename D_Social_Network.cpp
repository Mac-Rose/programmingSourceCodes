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

int check(int span, vector<int> &nums, int &ma)
{
    if (ma > span)
        return 51;
    int ans = 0;
    int i = 1, n = nums.size();
    while (i < n)
    {
        i = upper_bound(nums.begin() + i, nums.end(), nums[i - 1] + span) - nums.begin();
        ans++;
    }
    return ans;
}
int splitArray(vector<int> &nums, int m)
{
    int l = 1, r = 1e9 + 1;
    int ans;
    vector<int> prefix(nums.size() + 1);
    for (int i = 1; i < prefix.size(); i++)
    {
        prefix[i] = prefix[i - 1] + nums[i - 1];
    }
    int ma = *max_element(nums.begin(), nums.end());
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (check(mid, prefix, ma) <= m)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m;
    cin >> m;
    cout << splitArray({2, 3, 1, 2, 4, 3}, m);
}