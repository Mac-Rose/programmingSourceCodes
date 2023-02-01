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
        string a;
        cin >> a;
        vi possible = {1, 2, 3, 4, 6, 12};
        vector<vi> v(6, vi(12));
        vi ans;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                if (a[j] == 'X')
                    if (j == 0)
                        v[i][0]++;
                    else
                        v[i][j % (12 / possible[i])]++;
            }
            for (int j = 0; j < 12; j++)
            {
                if (v[i][j] == (possible[i]))
                {
                    ans.pb(i);
                    break;
                }
            }
        }
        cout << ans.size() << ' ';
        for (int i = 0; i < ans.size(); i++)
        {
            cout << possible[ans[i]] << 'x' << 12 / possible[ans[i]] << ' ';
        }
        cout << endl;
    }
}