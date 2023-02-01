#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

int check(vi &r)
{
    int ans = 0;
    int i = 0, n = r.size();
    while (i < n - 1)
    {
        if (r[i] == r[i + 1])
        {
            r[i] = -1;
            r[i + 1] = -1;
            ans++;
        }
        i++;
    }
    return ans;
}
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
        int temp = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == v[i + 1])
                temp++;
        }
        int ans = 0;
        int l = -1, f = -1;
        if (temp > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] == v[i + 1])
                {
                    f = i + 1;
                    break;
                }
            }
            for (int i = n - 1; i > 0; i--)
            {
                if (v[i] == v[i - 1])
                {
                    l = i - 1;
                    break;
                }
            }
            ans = l - f;
            if (ans == 0)
                ans++;
        }
        cout << ans << endl;
    }
}