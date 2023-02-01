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
int trap(vector<int> height)
{
    int n = height.size();
    int start = 0;
    int i = 1;
    int temp = 0;
    int ans = 0;
    while (i < n)
    {
        if (height[i] < height[start])
            temp += height[start] - height[i];
        else
        {
            ans += temp;
            start = i;
            temp = 0;
        }
        i++;
    }
    i = n - 2;
    temp = 0;
    int start1 = n - 1;
    while (i >= start)
    {
        if (height[i] < height[start1])
        {
            temp += height[start1] - height[i];
        }
        else
        {
            ans += temp;
            start1 = i;
            temp = 0;
        }
        i--;
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << trap({0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1});
}