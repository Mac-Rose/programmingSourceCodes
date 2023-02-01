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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, x;
        cin >> n >> x;
        vi v(n);
        for (int &it : v)
            cin >> it;
        vi temp(n + 1);
        vi prefix(n + 1);
        for (int i = 1; i <= n; i++)
            prefix[i] = prefix[i - 1] + v[i - 1];

        for (int i = 1; i <= n; i++)
        {
            temp[i] = INT64_MIN;
            for (int j = i; j <= n; j++)
            {
                temp[i] = max(temp[i], prefix[j] - prefix[j - i]);
            }
        }
        for (int i = 0; i <= n; i++) //i is no increments
        {
            int ans = -1;
            for (int j = 0; j <= n; j++) //j is size of subarray
            {
                ans = max(ans, temp[j] + x * min(i, j));
            }
            cout << ans << ' ';
        }
        cout << endl;
    }
}