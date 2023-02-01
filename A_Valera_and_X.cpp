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
    int n;
    cin >> n;
    vector<vector<char>> matrix(n, vector<char>(n));
    for (auto &it : matrix)
        for (auto &i : it)
            cin >> i;
    char req = matrix[n / 2][n / 2];
    char req1 = matrix[0][1];
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][i] != req)
        {
            cout << "NO";
            exit(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][n - 1 - i] != req)
        {
            cout << "NO";
            exit(0);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += count(all(matrix[i]), req1);
    if (ans == n * n - 2 * n + 1)
        cout << "YES";
    else
        cout << "NO";
}