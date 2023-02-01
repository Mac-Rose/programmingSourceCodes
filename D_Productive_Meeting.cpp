#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
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
        vector<pii> ans;
        priority_queue<pii> s;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            if (g)
                s.push({g, i + 1});
        }
        while (s.size() >= 2)
        {
            pii p1 = s.top();
            s.pop();
            pii p2 = s.top();
            s.pop();
            ans.push_back({p1.S, p2.S});
            if (p1.F > 1)
                s.push({p1.F - 1, p1.S});
            if (p2.F > 1)
                s.push({p2.F - 1, p2.S});
        }
        cout << ans.size() << endl;
        for (auto &i : ans)
            cout << i.F << " " << i.S << endl;
    }
}