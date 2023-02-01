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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, m;
        cin >> n >> m;
        set<pii> s;
        map<int, int> book;
        for (int i = 0; i < m; i++)
        {
            int x, w;
            cin >> x >> w;
            s.insert({w, x});
            book[x] = i + 1;
        }
        int wt = 0;
        vector<int> ans(2 * n);
        auto it = s.begin();
        for (int i = 0; i < 2 * n; i++)
        {
            wt += (it)->F;
            ans[i] = (it)->S;
            it++;
        }
        cout << wt << endl;
        sort(all(ans));
        int l = 0, r = 2 * n - 1;
        while (l < r)
        {
            cout << book[ans[l]] << ' ' << book[ans[r]];
            cout << endl;
            l++, r--;
        }
        cout << endl;
    }
}