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

void check(vector<ll> &v, int i, map<ll, list<ll>> &m)
{
    for (int j = 0; j <= i; j++)
    {
        cout << *m[v[j]].begin() << " ";
        m[v[j]].pop_front();
    }
    cout << endl;
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
        int n, w;
        cin >> n >> w;
        vi v(n);
        map<ll, list<ll>> m;
        for (auto &it : v)
        {
            cin >> it;
            m[it].pb(&it - &v[0] + 1);
        }
        sort(all(v));
        int flag = 0;
        int J = upper_bound(all(v), w / 2) - v.begin();
        int s = 0;
        for (int i = 0; i < J; i++)
        {
            s += v[i];
            if (s >= ceil(w * 1.0 / 2))
            {
                flag = 1;
                cout << i + 1 << endl;
                check(v, i, m);
                break;
            }
        }
        if (flag == 1)
            continue;
        if (J == n)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = J; i < n; i++)
        {
            if (v[i] > w)
            {
                cout << -1;
                cout << endl;
                break;
            }
            if (v[i] >= ceil(w * 1.0 / 2))
            {
                cout << 1 << endl
                     << *m[v[i]].begin();
                cout << endl;
                break;
            }
        }
    }
}