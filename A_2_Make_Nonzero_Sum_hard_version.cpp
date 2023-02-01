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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        vector<pii> ans;
        int start = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i])
            {
                if (start != -1)
                {
                    if (v[start] == v[i])
                    {
                        if (start % 2 == i % 2)
                        {
                            ans.push_back({start, i - 2});
                            ans.push_back({i - 1, i});
                        }
                        else
                        {
                            ans.push_back({start, i});
                        }
                    }
                    else
                    {
                        if (start % 2 == i % 2)
                        {
                            ans.push_back({start, i});
                        }
                        else
                        {
                            ans.push_back({start, i - 1});
                            ans.push_back({i, i});
                        }
                    }
                    start = -1;
                }
                else
                    start = i;
            }
        }
        if (start != -1)
        {
            cout << "-1\n";
            continue;
        }
        int sz = ans.size();
        int a = 0;
        for (int i = 0; i < sz; i++)
        {
            while (a < ans[i].F)
            {
                ans.push_back({a, a});
                a++;
            }
            a = ans[i].S + 1;
        }
        while (a < n)
        {
            ans.push_back({a, a});
            a++;
        }
        sort(all(ans));

        cout << ans.size() << endl;
        for (auto &[i, j] : ans)
            cout << i + 1 << ' ' << j + 1 << endl;
    }
}