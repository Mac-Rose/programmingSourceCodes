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
    int n, sum = 0;
    map<int, int> m;
    cin >> n;
    vi v(n);
    for (int &it : v)
    {
        cin >> it;
        sum += it;
        m[it]++;
    }
    vi ans;
    for (int i = 0; i < n; i++)
    {
        int x = sum - v[i];
        if (x & 1)
            continue;
        if (m.find(x / 2) != m.end())
        {
            if (x / 2 == v[i])
                if (m[x / 2] > 1)
                    ans.pb(i + 1);
                else
                    ;
            else
            {
                ans.pb(i + 1);
            }
        }
    }
    cout << ans.size() << endl;
    for (int &it : ans)
        cout << it << ' ';
}