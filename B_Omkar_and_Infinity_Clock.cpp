#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
        int n, k;
        cin >> n >> k;
        vi v(n), a(n), b(n);
        for (auto &it : v)
            cin >> it;
        int ma = *max_element(all(v));
        for (int i = 0; i < n; i++)
        {
            a[i] = ma - v[i];
        }
        ma = *max_element(all(a));
        for (int i = 0; i < n; i++)
        {
            b[i] = ma - a[i];
        }
        if (k & 1)
            for (auto it : a)
                cout << it << " ";
        else
            for (auto it : b)
                cout << it << " ";
        cout << endl;
    }
}