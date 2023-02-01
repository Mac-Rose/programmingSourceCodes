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
        int n, m;
        cin >> n >> m;
        set<int> s;
        for (int i = 0; i < m; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            s.emplace(b);
        }
        auto it = s.begin();
        int x;
        for (int i = 0; i < n; i++, it++)
        {
            if (*(it) != i + 1)
            {
                x = i + 1;
                break;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (i == x)
                continue;
            else
                cout << x << ' ' << i << endl;
        }
    }
}