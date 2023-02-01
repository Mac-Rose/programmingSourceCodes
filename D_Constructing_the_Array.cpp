#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

auto cmp = [](const pair<int, int> &lhs, const pair<int, int> &rhs)
{
    if (lhs.F != rhs.F)
    {
        return lhs.F < rhs.F;
    }
    else
        return lhs.second > rhs.second;
};

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
        priority_queue<pii, vector<pii>, decltype(cmp)> q(cmp);
        q.push({n, 0});
        int k = 1;
        vi ans(n);
        while (k <= n)
        {
            pii x = q.top();
            q.pop();
            {
                if (x.F & 1)
                {
                    if (x.S + x.F / 2 > -1 and x.S + x.F / 2 < n and ans[x.S + x.F / 2] == 0)
                        ans[x.S + x.F / 2] = k;
                    else
                        continue;
                    k++;
                }
                else
                {
                    if (x.S + x.F / 2 - 1 > -1 and x.S + x.F / 2 - 1 < n and ans[x.S + x.F / 2 - 1] == 0)
                        ans[x.S + x.F / 2 - 1] = k;
                    else
                        continue;
                    k++;
                }
            }
            if (x.F == 1)
                continue;
            if (x.F & 1)
            {
                q.push({x.F / 2, x.S});
                q.push({x.F / 2, x.S + x.F / 2 + 1});
            }
            else
            {
                q.push({x.F / 2, x.S + x.F / 2});
                if (x.F > 2)
                    q.push({x.F / 2 - 1, x.S});
            }
        }
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}