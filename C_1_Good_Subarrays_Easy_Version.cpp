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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        v.pb(-1);
        int j = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (v[j] >= j - i + 1)
            {
                j++;
            }
            int temp = j - i;
            ans += temp;
        }
        cout << ans << Endl;
    }
}