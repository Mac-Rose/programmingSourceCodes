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
    vi v(n);
    for (int &it : v)
        cin >> it;
    set<int> a(all(v));
    set<int> s;
    vi b(n + 1);
    iota(all(b), 0);

    for (int i = 0; i <= n; i++)
    {
        if (a.find(b[i]) == a.end())
            s.emplace(b[i]);
    }
    auto it1 = s.begin();
    vi ans(n, -1);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > i + 1)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "-1";
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
                ans[i] = v[i - 1];
        }
        for (auto &it : ans)
            if (it == -1)
            {
                it = *it1;
                it1++;
            }
        for (int &it : ans)
            cout << it << ' ';
    }
}