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
        int n;
        cin >> n;
        vi a(n);
        vector<pii> b;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            b.push_back({g, i});
        }
        sort(all(b));
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i].F == c)
            {
                a[b[i].S] = 0;
                continue;
            }
            a[b[i].S] = b[i].F + c;
            c++;
        }
        for (auto &it : a)
            cout << it << ' ';
        cout << endl;
    }
}