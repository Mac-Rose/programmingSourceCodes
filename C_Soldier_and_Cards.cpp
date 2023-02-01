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
    int k1, k2;
    cin >> k1;
    int fact = 1;
    for (int i = 2; i <= n - 1; i++)
        fact *= i;
    fact += n;
    list<int> q1, q2;
    for (int i = 0; i < k1; i++)
    {
        int g;
        cin >> g;
        q1.pb(g);
    }
    cin >> k2;
    for (int i = 0; i < k2; i++)
    {
        int g;
        cin >> g;
        q2.pb(g);
    }
    int ans = 0;
    while (q1.size() * q2.size())
    {
        ans++;
        if (q1.front() > q2.front())
        {
            q1.pb(q2.front());
            q1.pb(q1.front());
        }
        else
        {
            q2.pb(q1.front());
            q2.pb(q2.front());
        }
        q1.pop_front();
        q2.pop_front();
        if (ans > fact)
        {
            cout << -1;
            exit(0);
        }
    }
    cout << ans << ' ';
    if (q1.size())
        cout << 1;
    else
        cout << 2;
}