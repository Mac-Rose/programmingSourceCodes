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
        int n, k, b, s;
        cin >> n >> k >> b >> s;
        vi ans(n);
        if (b * k > s)
        {
            cout << -1 << endl;
            continue;
        }
        ans.front() = b * k;
        int rem = s - ans.front();
        for (int i = 0; i < n; i++)
        {
            ans[i] += min(rem, k - 1);
            rem -= min(rem, k - 1);
        }
        if (rem)
        {
            cout << -1 << endl;
            continue;
        }
        for (int &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}