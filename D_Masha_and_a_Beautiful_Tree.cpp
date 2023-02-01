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
        int k = n;
        int m = -1;
        while (k)
        {
            m++;
            k >>= 1;
        }
        int i = 0;
        int ans = 0;
        while (i < m)
        {
            for (int j = 0; j < n; j += (1 << (i + 1)))
            {
                if (v[j] > v[j + (1 << i)])
                {
                    ans++;
                    int a = j, b = j + (1 << i);
                    for (; a < j + (1 << i); a++, b++)
                        swap(v[a], v[b]);
                }
            }
            i++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (v[i - 1] != i)
            {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
}