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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ans = 0, xero = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        if (it < 0)
            neg++;
        if (it == 0)
            ans++, xero++;
        else
            ans += abs(it) - 1;
    }
    if (neg & 1 and xero == 0)
        ans += 2;
    cout << ans;
}