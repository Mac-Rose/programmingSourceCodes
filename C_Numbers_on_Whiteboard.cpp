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
    vi ans(n);
    ans.back() = -1;
    stack<int> s;
    for (auto &it : v)
        cin >> it;
    s.emplace(v.back());
    for (int i = n - 2; i > -1; i--)
    {
        while (s.empty() == false and v[i] >= s.top())
        {
            s.pop();
        }
        if (s.empty() == true)
            ans[i] = -1;
        else
            ans[i] = s.top();
        s.emplace(v[i]);
    }
    for (auto &it : ans)
        cout << it << ' ';
}