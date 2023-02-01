#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    map<int, vi> m;
    reverse(all(v));
    m[n] = v;
    for (int i = n - 1; i > 0; i--)
    {
        m[i] = m[i + 1];
        auto it = min_element(m[i].begin(), m[i].end());
        m[i].erase(it);
    }
    int g;
    cin >> g;
    for (int i = 0; i < g; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << m[l][l - r] << endl;
    }
}