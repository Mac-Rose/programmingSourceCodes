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
        if (is_sorted(all(v)))
        {
            cout << 0 << endl;
            continue;
        }
        int i = 0, k = n - 1;
        for (int j = 0; j < n; j++)
        {
            if (v[j])
            {
                i = j;
                break;
            }
        }
        for (int j = n - 1; j > -1; j--)
        {
            if (v[j] == 0)
            {
                k = j;
                break;
            }
        }
        int ans = 0;
        while (k > i)
        {
            v[k--]++;
            v[i++]--;
            ans++;
            while (k > i and v[k])
                k--;
            while (k > i and v[i] == 0)
            {
                i++;
            }
        }
        cout << ans;
        cout << Endl;
    }
}