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

int nextBig(int big, int small)
{
    if (small == big)
        return small;
    return big + small - (big % small);
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
        int n;
        cin >> n;
        vector<pii> v(n);
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            v[i] = {it, i};
        }
        sort(all(v));
        vector<pii> ans;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first > v[i - 1].first)
            {
                int x = nextBig(v[i].first, v[i - 1].first);
                ans.push_back({v[i].second, x - v[i].first});
                v[i].first = x;
            }
            else
            {
                ans.push_back({v[i].second, v[i - 1].first - v[i].first});
                v[i].first = v[i - 1].first;
            }
        }
        cout << ans.size() << endl;
        for (auto &[a, b] : ans)
            cout << a + 1 << ' ' << b << endl;
    }
}