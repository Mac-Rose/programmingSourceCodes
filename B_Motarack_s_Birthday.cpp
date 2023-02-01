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
int removeDuplicates(vector<int> nums)
{
    int l = 1, r = 1, count = 1, n = nums.size();
    while (r < n)
    {
        if (nums[r] == nums[r - 1])
        {
            nums[l] = nums[r];
            count++;
        }
        else
        {
            nums[l] = nums[r];
            count = 1;
        }
        if (count < 3)
            l++;
        r++;
    }
    return l;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    removeDuplicates({1, 1, 1, 2, 2, 3});
}