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
        sort(all(v));
        vector<pii> ans;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j > i; j--)
            {
                int x = v[j] % v[i];
                if (s.find(x) == s.end())
                {
                    ans.push_back({v[j], v[i]});
                    cnt++;
                    if (cnt == n / 2)
                        break;
                }
            }
            if (cnt == n / 2)
                break;
        }
        for (auto &it : ans)
        {
            cout << it.F << ' ' << it.S;
            cout << endl;
        }
    }
}