#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<vector<char>> matrix(n, vector<char>(n, '='));
        vi win(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        matrix[i][j] = 'X';
                    else if (a[j] == '2')
                    {
                        matrix[i][j] = '+';
                        matrix[j][i] = '-';
                    }
                }
            }
            else
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                        matrix[i][j] = 'X';
                    else if (a[j] == '2' and win[i] == 0 and matrix[i][j] == '=')
                    {
                        matrix[i][j] = '+';
                        matrix[j][i] = '-';
                        win[i]++;
                    }
                    else if (a[j] == '2' and win[i] != 0 and matrix[i][j] == '=')
                    {
                        matrix[i][j] = '-';
                        matrix[j][i] = '+';
                        win[j]++;
                    }
                }
            }
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '2')
                if (win[i] == 0)
                {
                    flag = 1;
                    break;
                }
        }
        if (flag == 1)
        {
            cout << "NO\n";
            continue;
        }
        else
            cout << "YES\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j];
            cout << endl;
        }
    }
}