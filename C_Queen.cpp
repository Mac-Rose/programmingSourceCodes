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
    map<int, int> m;
    map<int, vi> Graph;
    map<int, int> parent;
    for (int i = 1; i <= n; i++)
    {
        int pi, ci;
        cin >> pi >> ci;
        Graph[pi].pb(i);
        parent[i] = pi;
        m[i] = ci;
    }
    bool temp = false;
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        if (m[i] == 1)
        {
            for (auto &it : Graph[i])
            {
                if (m[it] == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                temp = true;
                cout << i << ' ';
                for (auto &it : Graph[i])
                {
                    parent[it] = parent[i];
                    // Graph[parent[i]].pb(it);
                }
            }
        }
    }
    if (temp == false)
        cout << -1;
}