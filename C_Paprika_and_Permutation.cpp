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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        vector<bool> visited(n + 2);
        int k = 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] <= n and visited[v[i]] == false)
            {
                visited[v[i]] = true;
            }
            else
            {
                ans++;
                while (visited[k] == true)
                    k++;
                if (k < (v[i] - 1) / 2 + 1)
                {
                    visited[k] = true;
                    k++;
                }
                else
                {
                    ans = -1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}