#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define F first
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    vector<bool> b(n + 1);
    vi d_factor(n + 1, 0);
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                d_factor[j]++;
            }
        }

        if (d_factor[i] == 2)
        {
            ans += 1;
        }
    }
    cout << ans;
}