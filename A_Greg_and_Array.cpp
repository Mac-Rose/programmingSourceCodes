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

struct operationData
{
    int a;
    int b;
    int c;
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vi v(n + 1, 0), v1(n);
    for (int &it : v1)
        cin >> it;
    vector<operationData> oper(m);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        oper[i] = {a, b, c};
    }
    vi queries(m + 1, 0);
    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        queries[l - 1]++;
        queries[r]--;
    }
    for (int i = 1; i < m + 1; i++)
    {
        queries[i] += queries[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        v[oper[i].a - 1] += (queries[i] * oper[i].c);
        v[oper[i].b] -= (queries[i] * oper[i].c);
    }
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        v1[i] += v[i];
    }
    for (int it : v1)
        cout << it << " ";
}