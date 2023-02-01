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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, x, c;
        cin >> n >> x >> c;

        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));

        partial_sum(all(v), v.begin());
        int ans = v.back();
        for (int i = 0; i < n; i++)
        {
            int temp = v.back() - v[i];
            temp += (i + 1) * x;
            temp -= (i + 1) * c;
            if (temp > ans)
                ans = temp;
        }
        cout << ans << endl;
    }
}