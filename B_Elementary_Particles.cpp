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

int cal(pii temp, int n)
{
    return temp.F + n - temp.S;
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
        vi v(n);
        pii ans = {INT_MIN, INT_MAX};
        vector<vi> freq(150001);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (freq[v[i]].size() > 0)
            {
                if (i - freq[v[i]].back() < ans.S - ans.F)
                {
                    ans = {freq[v[i]].back(), i};
                }
                else if (i - freq[v[i]].back() == ans.S - ans.F)
                {
                    if (cal({freq[v[i]].back(), i}, n) > cal(ans, n))
                    {
                        ans = {freq[v[i]].back(), i};
                    }
                }
            }
            freq[v[i]].pb(i);
        }
        if (ans.F == INT_MIN)
            cout << -1 << endl;
        else
            cout << cal(ans, n) << endl;
    }
}