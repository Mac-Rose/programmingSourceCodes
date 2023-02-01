#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

inline int check(int n)
{
    int ans = 0;
    while (n)
    {
        if (n & 1)
            ans++;
        n >>= 1;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, p;
    cin >> n >> p;
    int ans = -1;
    int k = 1;
    while (n - k * p > 0)
    {
        int currentNumber = n - k * p;
        int minRep = check(currentNumber);
        if (k >= minRep and k <= currentNumber)
        {
            ans = k;
            break;
        }
        k++;
    }
    cout << ans;
}