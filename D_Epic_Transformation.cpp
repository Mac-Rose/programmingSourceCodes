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
        vi freq(1e5 + 2, 0);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            freq[g]++;
        }
        priority_queue<int> q;
        for (auto &it : freq)
            if (it)
                q.emplace(it);
        while (q.size() > 1)
        {
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            x--, y--;
            if (x)
                q.emplace(x);
            if (y)
                q.emplace(y);
        }
        int ans = 0;
        while (q.empty() == false)
            ans += q.top(), q.pop();
        cout << ans << endl;
    }
}