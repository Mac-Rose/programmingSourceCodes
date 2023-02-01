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
    int n, m;
    cin >> n >> m;
    vector<vi> matrix(n, vi(m));
    vector<vi> ans(n, vi(m, -1));
    for (auto &it : matrix)
        for (auto &i : it)
            cin >> i;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int a = 0; a < m; a++)
                    ans[i][a] = 0;
                for (int a = 0; a < n; a++)
                    ans[a][j] = 0;
            }
        }
    }
    for (auto &it : ans)
        for (auto &i : it)
            if (i == -1)
                i = 1;
    vector<vi> temp(n, vi(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ans[i][j] == 1)
            {
                for (int a = 0; a < m; a++)
                    temp[i][a] = 1;
                for (int a = 0; a < n; a++)
                    temp[a][j] = 1;
            }
        }
    }
    if (temp == matrix)
    {
        cout << "YES\n";
        for (auto &it : ans)
        {
            for (auto &i : it)
                cout << i << ' ';
            cout << endl;
        }
    }
    else
        cout << "NO";
}