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
#define MOD 1000000007

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
        vector<vector<char>> req(n, vector<char>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> req[i][j];
            }
        }
        if (req.front().front() == '1')
        {
            cout << -1 << endl;
            continue;
        }
        vector<vi> v;
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = m - 2; j > -1; j--)
            {
                if (req[i][j + 1] == '1')
                {
                    vi temp = {i, j, i, j + 1};
                    v.pb(temp);
                }
            }
        }
        for (int i = n - 2; i > -1; i--)
        {
            if (req[i + 1][0] == '1')
            {
                vi temp = {i, 0, i + 1, 0};
                v.pb(temp);
            }
        }
        cout << v.size() << endl;
        for (auto &it : v)
        {
            for (int &i : it)
                cout << i + 1 << ' ';
            cout << endl;
        }
    }
}