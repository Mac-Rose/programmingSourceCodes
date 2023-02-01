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
        vi v(n);
        for (auto &it : v)
            cin >> it;
        vi a, b;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            b.pb(g);
            if (g == 0)
                a.pb(v[i]);
        }
        sort(all(a), greater<int>());
        for (int i = 0, k = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                v[i] = a[k];
                k++;
            }
        }
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
}