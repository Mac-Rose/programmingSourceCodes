#pragma "ofast"
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> v(n), req(m);
    for (auto &it : v)
        cin >> it;
    vi t;
    for (int i = 0; i < m; i++)
    {
        int g;
        cin >> g;
        t.pb(g - 1);
        req[i] = v[g - 1];
    }
    for (int i = 1; i < m; i++)
    {
        if (req[i].size() != req[i - 1].size())
        {
            cout << "No";
            exit(0);
        }
    }
    int len = req[0].size();
    string ans;
    for (int i = 0; i < len; i++)
    {
        int flag = 0;
        for (int j = 1; j < m; j++)
        {
            if (req[j][i] != req[j - 1][i])
                flag = 1;
        }
        if (flag)
            ans += '?';
        else
            ans += req[0][i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i].size() == ans.size())
        {
            int chk1 = 0;
            for (int y = 0; y < ans.size(); y++)
            {
                if (ans[y] != v[i][y] && ans[y] != '?')
                {
                    chk1 = 1;
                    break;
                }
            }

            if (!chk1 && binary_search(all(t), i) == false)
            {
                cout << "No";
                exit(0);
            }
        }
    }

    cout << "Yes\n";
    cout << ans;
}
