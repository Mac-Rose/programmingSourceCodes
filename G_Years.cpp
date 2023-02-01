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
    int n;
    cin >> n;
    vector<pii> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp.push_back({a, 1});
        mp.push_back({b, -1});
    }
    sort(all(mp));
    pii ans = {0, 0};
    int sum = 0;
    for (auto &[a, b] : mp)
    {
        sum += b;
        if (sum > ans.S)
        {
            ans.F = a;
            ans.S = sum;
        }
    }
    cout << ans.F << ' ' << ans.S;
}