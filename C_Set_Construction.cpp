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
        vector<vi> ans(n);
        for (int i = 0; i < n; i++)
        {
            ans[i].push_back(i + 1);
            for (int j = 0; j < n; j++)
            {
                char a;
                cin >> a;
                if (a == '1')
                    ans[j].pb(i + 1);
            }
        }
        for (auto &it : ans)
        {
            cout << it.size() << ' ';
            for (int &i : it)
                cout << i << ' ';
            cout << endl;
        }
    }
}