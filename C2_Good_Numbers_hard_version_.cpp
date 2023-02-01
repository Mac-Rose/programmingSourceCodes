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
    vector<int> v(39);
    v.front() = 1;
    for (int i = 1; i < 39; i++)
    {
        v[i] = 3 * v[i - 1];
    }
    while (tst--)
    {
        int n;
        cin >> n;
        int N = n;
        int ans1 = *upper_bound(all(v), N);
        int ans = 0, flag = 0;
        vector<bool> visited(39);
        while (n)
        {
            int x = upper_bound(all(v), n) - v.begin();
            int y = x;
            x--;
            while (visited[x])
            {
                x--;
                if (x < 0)
                {
                    ans = ans1;
                    flag = 1;
                    break;
                }
            }
            while (visited[y])
            {
                y++;
                if (y > 38)
                    break;
            }
            if (y < 39 and ans + v[y] >= N)
                ans1 = min(ans + v[y], ans1);
            if (flag)
                break;
            n -= v[x];
            ans += v[x];
            visited[x] = true;
            if (n < 0)
                break;
        }
        ans = min(ans, ans1);
        cout << ans << endl;
    }
}