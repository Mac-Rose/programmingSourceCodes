#include <bits/stdc++.h>
using namespace std;

// #define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

inline pii helper(int a, int b)
{
    if (a > b)
        swap(a, b);
    return {a, b};
}
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
        vector<bool> visited(n + 1);
        vector<vi> m(n + 1);

        map<pii, int> edges;
        vector<int> color(n - 1);
        vector<int> ans(n);
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
                swap(a, b);
            edges[{a, b}] = i;
            m[a].pb(b);
            m[b].pb(a);
        }
        int leaf1, leaf2;
        bool flag = false;
        bool out = false;
        for (int i = 0; i < n; i++)
        {
            if (m[i + 1].size() == 1 and flag == false)
            {
                leaf1 = i + 1;
                flag = true;
            }
            else if (m[i + 1].size() == 1)
                leaf2 = i + 1;
            else if (m[i + 1].size() > 2)
            {
                out = true;
                break;
            }
        }
        if (out)
        {
            cout << "-1\n";
            continue;
        }
        visited[leaf1] = true;
        int temp = m[leaf1].front();
        color[edges[helper(leaf1, temp)]] = 2;
        while (temp != leaf2)
        {
            for (int i = 0; i < m[temp].size(); i++)
            {
                if (visited[m[temp][i]] == false)
                {
                    if (color[edges[helper(temp, m[temp][1 - i])]] == 2)
                    {
                        color[edges[helper(temp, m[temp][i])]] = 5;
                    }
                    else
                        color[edges[helper(temp, m[temp][i])]] = 2;
                    visited[temp] = true;
                    temp = m[temp][i];
                    continue;
                }
            }
        }
        for (int &it : color)
            cout << it << ' ';
        cout << endl;
    }
}