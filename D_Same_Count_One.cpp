#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, m;
        cin >> n >> m;
        vector<vi> grid(n, vi(m));
        int cnt = 0;
        vi freq(n);
        for (auto &it : grid)
            for (int &i : it)
            {
                cin >> i;
                if (i)
                    cnt++, freq[&it - &grid.front()]++;
            }
        if (cnt % n)
        {
            cout << -1 << endl;
            continue;
        }
        int req = cnt / n;
        vector<vi> ans;
        for (int i = 0; i < m; i++)
        {
            vi excess, deficit;
            for (int j = 0; j < n; j++)
            {
                if (grid[j][i] and freq[j] > req)
                    excess.pb(j);
                else if (grid[j][i] == 0 and freq[j] < req)
                    deficit.pb(j);
            }
            for (int j = 0; j < excess.size() and j < deficit.size(); j++)
            {
                swap(grid[excess[j]][i], grid[deficit[j]][i]);
                ans.push_back({excess[j] + 1, deficit[j] + 1, i + 1});
                freq[deficit[j]]++;
                freq[excess[j]]--;
            }
        }
        cout << ans.size() << endl;
        for (auto &it : ans)
        {
            for (int &i : it)
                cout << i << ' ';
            cout << endl;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //         cout << grid[i][j] << ' ';
        //     cout << Endl;
        // }
    }
}