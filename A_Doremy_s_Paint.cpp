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
int countSubarrays(vector<int> &nums, int k)
{
    int index;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == k)
        {
            index = i;
            break;
        }
    }
    map<int, int> forward, backward;
    int greater = 0, smaller = 1;
    for (int i = index + 1; i < n; i++)
    {
        if (nums[i] > k)
            greater++;
        else
            smaller++;
        forward[greater - smaller]++;
    }
    greater = 0, smaller = 1;
    for (int i = index - 1; i > -1; i--)
    {
        if (nums[i] > k)
            greater++;
        else
            smaller++;
        backward[greater - smaller]++;
    }
    int ans = 0;

    for (auto &[a, b] : forward)
    {
        ans += b * backward[-a];
        ans += b * backward[-a + 1];
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi v{3, 2, 1, 4, 5};
    cout << countSubarrays(v, 4);
}