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
        vector<vector<char>> mat(8, vector<char>(8, '.'));
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> mat[i][j];
        char ans = 'B';
        for (int i = 0; i < 8; i++)
        {
            int cnt = 0;
            for (int j = 0; j < 8; j++)
            {
                if (mat[i][j] == 'R')
                {
                    cnt++;
                }
            }
            if (cnt == 8)
            {
                ans = 'R';
                break;
            }
        }
        cout << ans << endl;
    }
}