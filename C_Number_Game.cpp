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

bool check(int i, vi v)
{
    int idx = upper_bound(all(v), i) - v.begin();
    idx--;
    if (idx == -1)
        return false;
    int k = 0;
    while (idx >= k)
    {
        if (v[idx--] <= i)
            v[k++] += i--;
        if (i == 0)
            return true;
    }
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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (check(i, v))
                ans = i;
        }
        cout << ans << endl;
    }
}