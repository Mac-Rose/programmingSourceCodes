#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<char> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

inline bool left_flank(int a, int b, int k, int m, const vector<vi> &given)
{
    a--, b++;
    while (k--)
    {
        if (a < 0 or b >= m)
            return false;
        else if (given[a][b] == '.')
        {
            return false;
        }
        a--, b++;
    }
    return true;
}
inline void color_right(int a, int b, int k, vector<vi> &ans)
{
    k++;
    while (k--)
    {
        ans[a][b] = '*';
        a--, b--;
    }
}
inline void color_left(int a, int b, int k, vector<vi> &ans)
{
    a--, b++;
    while (k--)
    {
        ans[a][b] = '*';
        a--, b++;
    }
}
inline void check(const vector<vi> &given, vector<vi> &ans, int i, int j, int k, int n, int m)
{
    for (int a = i, b = j; a - i <= k; a++, b++)
    {
        if (a == n or b == m)
            return;
        else if (given[a][b] == '.')
            return;
    }
    int a = i + k, b = j + k;
    while (given[a][b] == '*')
    {
        if (left_flank(a, b, a - i, m, given) == true)
        {
            color_left(a, b, a - i, ans);
            color_right(a, b, a - i, ans);
        }
        a++, b++;
        if (a == n or b == m)
            return;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vi> given(n, vi(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> given[i][j];
            }
        }
        vector<vi> ans(n, vi(m, '.'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (given[i][j] == '*')
                    check(given, ans, i, j, k, n, m);
            }
        }
        if (given == ans)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}