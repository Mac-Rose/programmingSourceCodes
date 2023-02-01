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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        int first = n - 1;
        for (int i = n - 1; i > -1; i--)
        {
            if (a[i] == '1')
            {
                first = i;
                if (n - 1 - i <= k)
                    k -= (n - 1 - i), swap(a.back(), a[i]);
                break;
            }
        }
        for (int i = 0; i <= min(first, n - 2); i++)
        {
            if (a[i] == '1')
            {
                if (i <= k)
                    swap(a[i], a[0]);
                break;
            }
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += stoi(a.substr(i, 2));
        }
        cout << ans << endl;
    }
}