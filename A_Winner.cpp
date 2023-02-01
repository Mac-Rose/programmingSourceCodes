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
    int n;
    cin >> n;
    map<string, int> m;
    map<string, vector<pii>> j;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        int k;
        cin >> k;
        m[a] += k;
        j[a].push_back({m[a], i + 1});
    }
    int ans = -1;
    for (auto &it : m)
    {
        if (it.S > ans)
            ans = it.S;
    }
    vector<string> helper;
    for (auto &it : m)
    {
        if (it.S == ans)
            helper.pb(it.F);
    }
    pair<string, int> temp = {"", INT_MAX};
    for (auto &it : helper)
    {
        for (auto &i : j[it])
        {
            if (i.F >= ans)
            {
                if (i.S < temp.S)
                    temp = {it, i.S};
                break;
            }
        }
    }
    cout << temp.F;
}