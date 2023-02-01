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
        int start = n - 1;
        int ans = 0;
        int mi;
        for (int i = n - 1; i > -1; i--)
        {
            if (start == i)
            {
                mi = v[start];
                continue;
            }
            temp;
            if (temp & 1)
            {
                ans++;
            }
            else
            {
            }
        }
        cout << ans << endl;
    }
}