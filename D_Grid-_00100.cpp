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
        int n, k;
        cin >> n >> k;
        vector<vi> matrix(n, vi(n));
        vi vert(n), req(n);
        // if (k == 0)
        // {
        //     cout << "0\n";
        //     for (auto &it : matrix)
        //     {
        //         for (auto &i : it)
        //             cout << i;
        //         cout << endl;
        //     }
        //     continue;
        // }
        int x = (k - 1) / n + 1;
        int ceil = k % n;
        if (ceil == 0)
            ceil = n;
        for (int i = 0; i < ceil; i++)
            req[i] = x;
        for (int i = ceil; i < n; i++)
            req[i] = x - 1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < req[i]; j++)
                matrix[i][j] = 1;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                if (matrix[j][i])
                    temp++;
            }
            vert[i] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            int k = req[i];
            for (int j = 0; j < n; j++)
            {
                if (vert[j] > req[j] and k < n)
                {
                    while (vert[k] >= req[k] and k < n)
                        k++;
                    if (k == n)
                        continue;
                    matrix[i][j] = 0;
                    vert[j]--;
                    vert[k]++;
                    matrix[i][k] = 1;
                    k++;
                }
            }
        }
        if (k % n == 0)
            cout << "0\n";
        else
            cout << "2\n";
        for (auto &it : matrix)
        {
            for (auto &i : it)
                cout << i;
            cout << endl;
        }
    }
}