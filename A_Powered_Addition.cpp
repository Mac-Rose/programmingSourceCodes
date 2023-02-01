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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                ans = max(ans, (int)log2(v[i] - v[i + 1]) + 1);
                v[i + 1] = v[i];
            }
        }
        cout << ans << endl;
    }
}
