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
    vector<vector<char>> v(n, vector<char>(m));
    for (auto &it : v)
        for (char &i : it)
            cin >> i;

    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp = 1;
            if (v[i][j] == '1')
                continue;
            int g = m, h = i + 1;
            for (; h < n; h++)
            {
                if (v[h][j] == '1')
                    break;
            }
            for (int a = i; a < h; a++)
            {
                int b;
                for (b = j; b < g; b++)
                {
                    if (v[a][b] == '1')
                    {
                        g = b;
                        break;
                    }
                }
                temp = max(temp, 2 * (a - i + g - j + 1));
            }
            ans = max(temp, ans);
        }
    }
    cout << ans;
}