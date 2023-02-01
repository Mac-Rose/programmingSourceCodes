#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

struct st
{
    int l, r, d;
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
        vi v(n), j(n);
        for (auto &it : v)
            cin >> it;
        j = v;
        sort(all(j));
        int i = 0;
        vector<st> ans;
        while (i < n)
        {
            int index = min_element(v.begin() + i, v.end()) - v.begin();
            if (index != i)
                ans.push_back({i + 1, index + 1, index - i});
            v.insert(v.begin() + i, v[index]);
            v.erase(v.begin() + index + 1);
            i++;
        }
        cout << ans.size() << endl;
        for (auto it : ans)
        {
            cout << it.l << ' ' << it.r << ' ' << it.d;
            cout << endl;
        }
    }
}