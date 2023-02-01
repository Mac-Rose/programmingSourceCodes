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
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int &it : v)
        cin >> it;
    queue<int> q;
    map<int, bool> m;
    for (int i = 0; i < n; i++)
    {
        if (q.size() < k)
        {
            if (m.find(v[i]) == m.end())
            {
                m[v[i]] = true;
                q.emplace(v[i]);
            }
        }
        else
        {
            if (m.find(v[i]) == m.end())
            {
                m[v[i]] = true;
                m.erase(q.front());
                q.emplace(v[i]);
                q.pop();
            }
        }
    }
    cout << q.size() << endl;
    vi ans;
    while (q.size())
    {
        ans.pb(q.front());
        q.pop();
    }
    reverse(all(ans));
    for (auto &it : ans)
        cout << it << ' ';
}