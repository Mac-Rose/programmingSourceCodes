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
        // v.push_back(1);
        vi ans(n + 1);
        ans.front() = v.front();
        for (int i = 1; i < n; i++)
        {
            ans[i] = lcm(v[i - 1], v[i]);
        }
        ans.back() = v.back();
        bool ans1 = true;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != gcd(ans[i], ans[i + 1]))
            {
                ans1 = false;
                break;
            }
        }
        (ans1) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}