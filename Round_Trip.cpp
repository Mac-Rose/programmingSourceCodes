#include <bits/stdc++.h>
typedef long long ll;
#define int ll
#define endl "\n"
#define pb push_back
#define lb lower_bound
#define ub upper_bound
using namespace std;
vector<vector<int>> v(200001);
bool vis[100001];
vector<int> temp;
int n;
bool dfs(int i, int c)
{
    vis[i] = true;
    temp.pb(i);
    for (auto node : v[i])
    {
        if (!vis[node])
        {
            if (dfs(node, i) == true)
            {
                return true;
            }
        }
        else if (c != node)
        {
            temp.pb(node);
            return true;
        }
    }
    temp.pop_back();
    return false;
}
signed main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, c, d;
    cin >> n >> m;
    while (m--)
    {
        cin >> c >> d;
        v[c].pb(d);
        v[d].pb(c);
    }
    int x = 0;
    for (int i = 1; i <= n; i++)
    {
        temp.clear();
        if (!vis[i])
        {
            if (dfs(i, -1))
            {
                temp.erase(temp.begin(), find(temp.begin(), temp.end(), temp.back()));
                cout << temp.size() << endl;
                for (auto &it : temp)
                    cout << it << ' ';
                exit(0);
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}