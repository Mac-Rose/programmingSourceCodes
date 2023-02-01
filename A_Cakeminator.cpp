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
    vector<vector<char>> matrix(n, vector<char>(m));
    for (auto &it : matrix)
        for (auto &i : it)
            cin >> i;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (find(all(matrix[i]), 'S') == matrix[i].end())
            r++;
    }
    for (int j = 0; j < m; j++)
    {
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (matrix[i][j] == 'S')
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            l++;
    }
    cout << m * r + n * l - l * r;
}