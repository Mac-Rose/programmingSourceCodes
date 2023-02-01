#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<pair<int, pii>> v(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[i] = {r, {l, i}};
    }
    sort(all(v));
    set<int> visited;
    vi ans(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = v[i].S.F; j <= v[i].F; j++)
        {
            if (visited.find(j) == visited.end())
            {
                ans[v[i].S.S] = j;
                visited.emplace(j);
                break;
            }
        }
    }
    for (auto &it : ans)
        cout << it << ' ';
}