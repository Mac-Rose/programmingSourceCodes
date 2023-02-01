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
vector<int> findBall(vector<vector<int>> &grid)
{
    int row = grid.size(), col = grid.front().size();
    vector<int> ans;
    for (int i = 0, start = 0; i < col; i++)
    {
        int finalCol = i;
        start = 0;
        while (finalCol != -1 and start < row)
            if (grid[start][finalCol] == 1)
            {
                if (finalCol < col and grid[start][finalCol + 1] == 1)
                {
                    start++;
                    finalCol++;
                }
                else
                {
                    finalCol = -1;
                }
            }
            else
            {
                if (finalCol > 0 and grid[start][finalCol - 1] == -1)
                {
                    start++;
                    finalCol--;
                }
                else
                {
                    finalCol = -1;
                }
            }
        ans.push_back(finalCol);
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vi> v({{1}});
    findBall(v);
}