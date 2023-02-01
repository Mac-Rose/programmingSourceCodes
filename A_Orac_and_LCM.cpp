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
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        v[i] = g;
    }
    vi ans(n);
    ans.back() = v.back();
    for (int i = n - 2; i > -1; i--)
    {
        ans[i] = __gcd(ans[i + 1], v[i]);
    }
    vi temp;
    for (int i = 0; i < n - 1; i++)
    {
        temp.pb(v[i] * ans[i + 1] / ans[i]);
    }
    // temp.pb(v.back());
    int t = temp.front();
    for (int i = 1; i < n - 1; i++)
    {
        t = __gcd(temp[i], t);
    }
    cout << t;
}