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
    int n, x0, y0;
    cin >> n >> x0 >> y0;
    vector<pii> pos(n);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        pos[i] = {x, y};
    }
    vector<bool> visited(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            ans++;
            double m = (pos[i].F - x0) * 1.0 / (pos[i].S - y0);
            if (pos[i].S == y0)
            {
                for (int j = i; j < n; j++)
                {
                    if (visited[j] == false)
                    {
                        if (pos[j].S == y0)
                            visited[j] = true;
                    }
                }
                continue;
            }
            for (int j = i; j < n; j++)
            {
                if (visited[j] == false)
                {
                    double d = (pos[j].F - x0) * 1.0 / (pos[j].S - y0);
                    if (abs(d - m) < 1 / 1e9)
                        visited[j] = true;
                }
            }
        }
    }
    cout << ans;
}