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
        vi v(n);
        for (auto &it : v)
            cin >> it;
        vector<vi> v1(n + 1, vi(n));
        v1[0] = v;
        for (int i = 1; i < n + 1; i++)
        {
            map<int, int> m;
            for (int j = 0; j < n; j++)
            {
                m[v1[i - 1][j]]++;
            }
            for (int j = 0; j < n; j++)
            {
                v1[i][j] = m[v1[i - 1][j]];
            }
        }
        int g;
        cin >> g;
        for (int i = 0; i < g; i++)
        {
            int x, k;
            cin >> x >> k;
            k = min(k, n);
            cout << v1[k][x - 1] << endl;
        }
    }
}