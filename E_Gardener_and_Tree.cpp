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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        int N = n;
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vector<unordered_set<int>> G(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int l, r;
            cin >> l >> r;
            G[l].emplace(r);
            G[r].emplace(l);
        }
        unordered_set<int> store;
        for (auto &it : G)
            if (it.size() == 1)
                store.emplace(&it - &G[0]);
        int ans = 0;
        while (k-- and n != 0)
        {
            unordered_set<int> d;
            ans += store.size();
            for (auto &it : store)
            {
                int x = *G[it].begin();
                G[x].erase(it);
                n--;
                if (G[x].size() <= 1)
                    d.emplace(x);
            }
            store = d;
        }
        cout << N - ans << endl;
    }
}