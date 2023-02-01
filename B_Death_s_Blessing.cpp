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
        vi b(n);
        for (int &it : b)
            cin >> it;

        int ans = 0;
        int i = 0, j = n - 1;
        while (j > i)
        {
            if (b[i] < b[j])
            {
                ans += v[i++];
                v[i] += b[i - 1];
            }
            else
            {
                ans += v[j--];
                v[j] += b[j + 1];
            }
        }
        ans += v[j];
        cout << ans << endl;
    }
}