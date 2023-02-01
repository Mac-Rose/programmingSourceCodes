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

int smm(int a)
{
    return a * (a + 1) / 2;
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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int &it : v)
            cin >> it;
        int ma = *max_element(all(v));
        int cur = accumulate(all(v), 0ll);
        k -= (smm(ma) - cur);
        if (k < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        bool ans = false;
        for (int i = ma; i < 150; i++)
        {
            if (smm(i) - smm(ma) == k)
            {
                ans = true;
                break;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}