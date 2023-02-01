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
    int n, m;
    cin >> n >> m;
    vi ans(m);
    if (m & 1)
    {
        ans[0] = m / 2 + 1;
        for (int i = 1, k = m / 2 + 1; i < m; i++)
        {
            if (i & 1)
                k -= i;
            else
                k += i;
            ans[i] = k;
        }
    }
    else
    {
        ans[0] = m / 2;
        for (int i = 1, k = m / 2; i < m; i++)
        {
            if (i & 1)
                k += i;
            else
                k -= i;
            ans[i] = k;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i % m] << endl;
}