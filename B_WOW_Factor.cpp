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
    string v;
    cin >> v;
    int n = v.size();
    int ans = 0;
    vi temp;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] == v[i] and v[i] == 'v')
        {
            ans++;
        }
        else if (v[i] == 'o')
        {
            temp.pb(ans);
            ans = 0;
        }
    }
    if (ans > 0)
        temp.pb(ans);
    ans = 0;
    partial_sum(all(temp), temp.begin());
    for (int i = 0; i < temp.size(); i++)
    {
        ans += temp[i] * (temp.back() - temp[i]);
    }
    cout << ans;
}