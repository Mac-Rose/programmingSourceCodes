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
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
{
    int ans = (by2 - by1) * (bx2 - bx1) + (ay2 - ay1) * (ax2 - ax1);
    int x = 0, y = 0;
    if (ax1 > bx1 and ax2 < bx2)
    {
        x = ax2 - ax1;
    }
    else if (bx1 > ax1 and bx2 < ax2)
    {
        x = bx2 - bx1;
    }
    else if (ax1 >= bx1 and ax1 <= bx2)
    {
        x = bx2 - ax1;
    }
    else if (bx1 >= ax1 and bx1 <= ax2)
    {
        x = ax2 - bx1;
    }
    if (ay1 > by1 and ay2 < by2)
    {
        y = ay2 - ay1;
    }
    else if (by1 > ay1 and by2 < ay2)
    {
        y = by2 - by1;
    }
    else if (by2 >= ay1 and by2 <= ay2)
    {
        y = by2 - ay1;
    }
    else if (ay2 >= by1 and ay2 <= by2)
    {
        y = ay2 - by1;
    }
    return ans - x * y;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    computeArea(-5, -5, 0, 3, -3, -3, 3, 3);
}