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
        int n, k;
        cin >> n >> k;
        vi v(k);
        for (auto &it : v)
            cin >> it;
        vi position;
        // reverse(all(position));
        sort(all(v), greater<int>());
        position = v;
        for (auto &it : v)
            it = n - it;
        for (int i = 1; i < k; i++)
        {
            v[i] += v[i - 1];
        }
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (position[i] >= v[i])
                ans++;
            else
            {
                if (i == 0 or position[i] > v[i - 1])
                    ans++;
                break;
            }
        }
        cout << ans << endl;
    }
}