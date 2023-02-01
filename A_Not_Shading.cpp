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
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        vector<vector<char>> v;
        v.resize(n, vector<char>(m));
        int flag = 1;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char a;
                cin >> a;
                v[i][j] = a;
                if (a == 'W')
                    temp++;
            }
        }
        if (temp == n * m)
            flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i][c - 1] == 'B')
                flag = 2;
        }
        for (int i = 0; i < m; i++)
        {
            if (v[r - 1][i] == 'B')
                flag = 2;
        }
        if (v[r - 1][c - 1] == 'B')
            cout << 0;
        else if (flag == 0)
            cout << -1;
        else if (flag == 2)
            cout << 1;
        else
            cout << 2;
        cout << endl;
    }
}