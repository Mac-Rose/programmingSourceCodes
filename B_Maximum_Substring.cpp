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

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size(), m = nums2.size();
    if (n > m) // upar wala hamesha chota hoga
        swap(nums1, nums2);

    n = nums1.size(), m = nums2.size();
    if (m + n == 1)
        return nums2.front();

    int medianIndex = (n + m - 1) / 2 + 1;
    pair<double, double> ans;

    int l1 = -1, r1 = n - 1;
    while (l1 <= r1)
    {
        int m1 = floor(double(l1 + r1) / 2);
        int m2 = medianIndex - m1 - 2;
        if (m2 >= m)
            l1 = m1 + 1;
        if (m2 != -1 and (m1 == -1 or nums2[m2] >= nums1[m1]))
        {
            if (m1 == n - 1)
            {
                ans = {nums2[m2], nums2[m2 + 1]};
                break;
            }
            else if (nums1[m1 + 1] >= nums2[m2])
            {
                if (m2 == m - 1)
                    ans = {nums2[m2], nums1[m1 + 1]};
                else
                    ans = {nums2[m2], min(nums1[m1 + 1], nums2[m2 + 1])};
                break;
            }
            else
            {
                l1 = m1 + 1;
            }
        }
        else
        {
            if (m2 == m - 1)
            {
                ans = {nums1[m1], nums1[m1 + 1]};
                break;
            }
            else if (nums2[m2 + 1] >= nums1[m1])
            {
                if (m1 == n - 1)
                    ans = {nums1[m1], nums2[m2 + 1]};
                else
                    ans = {nums1[m1], min(nums2[m2 + 1], nums1[m1 + 1])};
                break;
            }
            else
            {
                r1 = m1 - 1;
            }
        }
    }
    if ((n + m) & 1)
        return ans.first;
    else
        return (ans.first + ans.second) / 2;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, m;
        cin >> n >> m;
        vi a(n), b(m);
        for (int &it : a)
            cin >> it;
        for (int &it : b)
            cin >> it;
        cout << findMedianSortedArrays(a, b) << endl;
    }
}