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

vector<vector<char>> solution(vector<vector<char>> table)
{
    int n = table.size(), m = table.front().size();
    vector<vector<char>> ans(2 * m - 1);

    for (int i = m - 1, l = 0; i > -m; i--, l++)
    {
        for (int j = i, k = 0; j < m; j++, k++)
        {
            if (j < 0)
                continue;
            if (n - 2 * k - 1 < 0)
                break;
            ans[l].push_back(table[n - 2 * k - 1][j]);
            ans[l].push_back(table[n - 2 * k - 2][j]);
        }
    }

    // for (auto &it : ans)
    // {
    //     for (char &i : it)
    //         cout << i << ' ';
    //     cout << endl;
    // }
    vector<vector<char>> ans1(n);
    for (int i = n - 2; i <= m; i--)
    {
        for (int)
    }
    return ans1;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<char>> table{{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'k', 'l'}, {'m', 'n', 'o'}, {'p', 'q', 'r'}};
    solution(table);
}