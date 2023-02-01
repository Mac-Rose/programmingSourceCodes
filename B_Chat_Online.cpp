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
    int p, q, l, r;
    cin >> p >> q >> l >> r;
    vi time_table(1001);
    for (int i = 0; i < p; i++)
    {
        int a, b;
        cin >> a >> b;
        time_table[a]++;
        if (b != 1000)
            time_table[b + 1]--;
    }
    partial_sum(all(time_table), time_table.begin());
    set<int> s;
    vi temp(1001);
    for (int j = 0; j < q; j++)
    {
        int a, b;
        cin >> a >> b;
        temp[a]++;
        if (b != 1000)
            temp[b + 1]--;
    }
    partial_sum(all(temp), temp.begin());
    int ans = 0;
    for (int i = 0; i < 1001; i++)
        if (temp[i] > 0)
            s.insert(i);
    for (int i = l; i <= r; i++)
    {
        for (auto &it : s)
        {
            if (i + it > 1000)
                break;
            if (time_table[i + it] > 0)
            {
                ans++;
                break;
            }
        }
    }
    cout << ans;
}