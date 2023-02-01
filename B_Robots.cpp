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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (auto &it : v)
            cin >> it;
        pii ans1, ans2;
        ans1 = ans2 = {-1, -1};
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if (v[i][j] == 'R')
                {
                    ans1 = {i, j};
                    flag = true;
                    break;
                }
            if (flag)
                break;
        }
        flag = false;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                if (v[j][i] == 'R')
                {
                    ans2 = {j, i};
                    flag = true;
                    break;
                }
            if (flag)
                break;
        }
        if (ans1 == ans2 and ans1.F != -1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}