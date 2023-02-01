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
        vi b(n), p(n), parent(n + 1);
        for (auto &it : b)
        {
            cin >> it;
            parent[&it - &b[0] + 1] = it;
        }
        for (auto &it : p)
            cin >> it;

        map<int, vi> G;
        int root;
        for (int i = 1; i <= n; i++)
        {
            if (b[i - 1] == i)
                root = i;
            G[b[i - 1]].pb(i);
        }
        set<int> s;
        s.emplace(root);
        bool flag = false;
        int k = 0, j = 0;
        map<int, int> ans;
        while (k < n)
        {
            if (s.find(p[k]) == s.end())
            {
                flag = true;
                break;
            }
            ans[p[k]] = j;
            j++;
            for (auto &it : G[p[k]])
            {
                s.emplace(it);
            }
            k++;
        }
        if (flag)
            cout << -1 << endl;
        else
        {
            for (auto &it : ans)
            {
                if (it.F == root)
                    cout << 0 << ' ';
                else
                    cout << it.S - (ans[parent[it.F]]) << ' ';
            }
            cout << endl;
        }
    }
}