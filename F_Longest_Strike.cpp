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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            freq[it]++;
            if (freq.find(++it) == freq.end())
                freq[it] = 0;
        }
        vector<pair<int, pii>> ans;
        int temp = 0;
        int l, r;
        for (auto &it : freq)
        {
            if (it.S >= k)
            {
                if (temp == 0)
                    l = it.F;
                r = it.F;
                temp++;
            }
            else
                ans.push_back({temp, {l, r}}), temp = 0;
        }
        if (temp >= k)
            ans.push_back({temp, {l, r}});
        if (freq[ans.back().S.S] < k)
        {
            cout << -1 << endl;
            continue;
        }
        sort(all(ans));
        cout << ans.back().S.F << ' ' << ans.back().S.S << endl;
    }
}