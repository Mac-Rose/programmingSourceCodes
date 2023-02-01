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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (int &it : v)
        cin >> it;

    vi ans(x + 1);
    ans.front() = 1;
    for (int i = 1; i < x + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - v[j] > -1)
            {
                ans[i] = ans[i] + ans[i - v[j]] % MOD;
                ans[i] = ans[i] % MOD;
            }
        }
    }
    cout << ans.back();
}