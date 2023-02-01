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
        set<int> s(all(v));
        if (s.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        map<int, vi> freq;
        for (int i = 0; i < n; i++)
        {
            freq[v[i]].pb(i);
        }
        int ans = INT64_MAX;
        for (auto &it : freq)
        {
            int temp = max(it.S.front(), n - it.S.back() - 1);
            int m = it.S.size();
            for (int i = 1; i < m; i++)
            {
                temp = max(temp, (it.S[i] - it.S[i - 1] - 2) / 2 + 1);
            }
            ans = min(ans, temp);
        }
        cout << ans << endl;
    }
}