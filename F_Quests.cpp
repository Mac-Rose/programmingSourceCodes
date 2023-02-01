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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

bool check(int mid, int c, int d, vi &v)
{
    int x = v.size();
    int k = d / (mid + 1);
    int sum = 0;
    for (int i = 0; i < min(x, mid + 1); i++)
    {
        sum += v[i];
    }
    sum *= k;
    int j = d % (mid + 1);
    // sum += accumulate(v.begin(), v.begin() + j, 0ll);
    for (int i = 0; i < min(x, j); i++)
    {
        sum += v[i];
    }
    if (sum >= c)
        return true;
    else
        return false;
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
        int n, c, d;
        cin >> n >> c >> d;
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        reverse(all(v));
        if (d * v.front() < c)
            cout << "Impossible";
        else if (d > n and accumulate(v.begin(), v.end(), 0ll) >= c)
        {
            cout << "Infinity";
        }
        // else if (d > n and accumulate(v.begin(), v.end(), 0ll) < c)
        // {
        //         }
        else if (d <= n and accumulate(v.begin(), v.begin() + d, 0ll) >= c)
        {
            cout << "Infinity";
        }
        else
        {
            int l = 0, r = d - 1;
            int ans = d;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (check(mid, c, d, v))
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (ans == d)
                cout << "Impossible";
            else
                cout << ans;
        }
        cout << endl;
    }
}