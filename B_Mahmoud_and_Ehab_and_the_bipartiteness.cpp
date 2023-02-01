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
    vector<bool> visited(n + 1);
    vector<int> color(n);
    queue<int> q;
    map<int, vi> Graph;
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        Graph[a].pb(b);
        Graph[b].pb(a);
    }
    for (int i = 1; i <= n; i++)
        if (visited[i] == false)
        {
            color[i - 1] = 0, q.emplace(i);
            while (q.empty() == false)
            {
                int src = q.front();
                q.pop();
                visited[src] = true;
                for (int &it : Graph[src])
                {
                    if (visited[it] == false)
                    {
                        color[it - 1] = 1 - color[src - 1];
                        q.emplace(it);
                    }
                }
            }
        }
    int cnt0, cnt1;
    cnt0 = cnt1 = 0;
    for (auto &it : color)
        if (it & 1)
            cnt1++;
        else
            cnt0++;
    int ans = cnt1 * cnt0 - n + 1;
    cout << ans;
}