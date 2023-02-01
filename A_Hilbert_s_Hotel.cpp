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

inline ll mod(int k, int n, vi &v)
{
    return ((k + v[k]) % n + n) % n;
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
        int n;
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        set<ll> t;
        for (int k = 0; k < n; k++)
        {
            t.insert(mod(k, n, v));
        }
        if (t.size() == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}