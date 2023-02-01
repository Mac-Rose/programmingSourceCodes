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
        int n;
        cin >> n;
        vector<vi> ans(n, vi(n));
        int k = 1, m = n * n;
        if (n & 1)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i + j) & 1)
                    {
                        ans[i][j] = k++;
                    }
                    else
                    {
                        ans[i][j] = m--;
                    }
                }
                if (i & 1)
                    reverse(all(ans[i]));
            }
        }
        else
            for (int i = 0; i < n; i++)
            {
                if (i & 1)
                    for (int j = n - 1; j > -1; j--)
                    {
                        if ((i + j) & 1)
                        {
                            ans[i][j] = m--;
                        }
                        else
                        {
                            ans[i][j] = k++;
                        }
                    }
                else
                    for (int j = 0; j < n; j++)
                    {
                        if ((i + j) & 1)
                        {
                            ans[i][j] = m--;
                        }
                        else
                        {
                            ans[i][j] = k++;
                        }
                    }
            }
        for (auto &it : ans)
        {
            for (int &i : it)
                cout << i << ' ';
            cout << endl;
        }
    }
}