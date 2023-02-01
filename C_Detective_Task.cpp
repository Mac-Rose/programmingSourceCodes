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
        string a;
        cin >> a;
        int n = a.size();
        if (n == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            vi z(n), o(n);
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == '0')
                    z[i + 1]++;
                if (a[n - i - 1] == '1')
                {
                    o[n - i - 2]++;
                }
            }
            partial_sum(all(z), z.begin());
            for (int i = n - 2; i > -1; i--)
                o[i] += o[i + 1];
            int ans = 0;
            for (int i = 0; i < n; i++)
            {
                if (o[i] == 0 and z[i] == 0)
                    ans++;
            }
            cout << ans << endl;
        }
    }
}