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
    vector<vector<char>> v(n, vector<char>(m));
    for (auto &it : v)
    {
        for (char &i : it)
            cin >> i;
    }
    int ans = 0;
    vi left(n, m), right(n, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'G')
            {
                left[i] = j;
                break;
            }
        }
        for (int j = m - 1; j > -1; j--)
        {
            if (v[i][j] == 'G')
            {
                right[i] = j;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (left[i] != m and right[i] != -1)
        {
            ans += m - 1 - i;
            break;
        }
    }
    int j = 0;
    for (int i = n - 1; i > -1; i--)
    {
        if (left[i] == m and right[i] == -1)
            continue;
        if (right[i] - j > j - left[i])
        {
            int x = right[i];
            if (x > j)
                ans += x - j;
            if (left[i] < j)
                ans += 2 * (j - left[i]);
            j = x;
        }
        else
        {
            int x = left[i];
            if (x < j)
                ans += j - x;
            if (right[i] > j)
                ans += 2 * (right[i] - j);
            j = x;
        }
    }
    cout << ans << endl;
}