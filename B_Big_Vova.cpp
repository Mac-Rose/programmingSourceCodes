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
        sort(all(v), greater<>());
        vi ans(n);
        ans.front() = v[0];
        int gcd = ans.front();
        vector<bool> visited(n);
        visited.front() = true;
        for (int i = 1; i < n; i++)
        {
            int temp = 1;
            int sot = i;
            bool flag = false;
            for (int j = 1; j < n; j++)
            {
                if (visited[j] == false and __gcd(gcd, v[j]) > temp)
                {
                    temp = __gcd(gcd, v[j]);
                    flag = true;
                    sot = j;
                }
            }
            if (flag)
            {
                ans[i] = v[sot];
                gcd = __gcd(gcd, temp);
                visited[sot] = true;
            }
            else
            {
                int k = 0, m = 0;
                for (; m < n; m++)
                {
                    if (ans[m] == 0)
                    {
                        for (; k < n; k++)
                        {
                            if (visited[k] == false)
                            {
                                ans[m] = v[k];
                                visited[k] = true;
                                break;
                            }
                        }
                    }
                }
                break;
            }
        }
        for (int i = 0; i < n; i++)
            if (ans[i] != 0)
                cout << ans[i] << ' ';
        cout << endl;
    }
}