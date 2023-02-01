#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
    vi v(n);
    for (auto &it : v)
        cin >> it;
    if (n < 3)
    {
        cout << n;
        exit(0);
    }
    int ans = 2, temp = 2;
    for (int i = 2; i < n; i++)
    {
        if (v[i - 1] + v[i - 2] == v[i])
            temp++;
        else
            temp = 2;
        ans = max(temp, ans);
    }
    cout << ans;
}