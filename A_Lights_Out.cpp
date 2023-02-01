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
    vector<vi> ans(3, vi(3, 0));
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int g;
            cin >> g;
            ans[i][j] += g;
            if (j != 2)
                ans[i][j + 1] += g;
            if (j != 0)
                ans[i][j - 1] += g;
            if (i != 2)
                ans[i + 1][j] += g;
            if (i != 0)
                ans[i - 1][j] += g;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (ans[i][j] & 1) ? cout << '0' : cout << '1';
        }
        cout << endl;
    }
}