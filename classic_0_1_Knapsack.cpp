#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define S second

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, m;
        cin >> n >> m;
        int ar[m + 1][n + 1];
        int wt[m], price[m];
        for (int i = 0; i < m; i++)
        {
            cin >> wt[i];
            cin >> price[i];
        }
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (i == 0 or j == 0)
                {
                    ar[i][j] = 0;
                    continue;
                }
                if (j >= wt[i - 1])
                {
                    int temp;
                    temp = price[i - 1];
                    temp += ar[i - 1][j - wt[i - 1]];
                    if (temp > ar[i - 1][j])
                        ar[i][j] = temp;
                    else
                        ar[i][j] = ar[i - 1][j];
                }
                else
                {
                    ar[i][j] = ar[i - 1][j];
                }
            }
        }
        cout << ar[m][n] << "\n";
    }
}