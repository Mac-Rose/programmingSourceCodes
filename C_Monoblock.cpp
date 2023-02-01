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

vi v;
vector<vi> seg;
void build(int node, int start, int end)
{
    if (start == end)
        seg[node] = {1, v[start], v[start]};
    else
    {
        int mid = (start + end) / 2;
        build(2 * node + 1, start, mid);
        build(2 * node + 2, mid + 1, end);
        seg[node][0] = seg[2 * node + 1][0] + seg[2 * node + 2][0];
        seg[node][1] = seg[2 * node + 1][1];
        seg[node][2] = seg[2 * node + 1][2];

        if (seg[2 * node + 1][2] == seg[2 * node + 2][1])
            seg[node][0] -= 1;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;

    v.resize(n);
    for (int &it : v)
        cin >> it;

    seg.resize(4 * n + 10, vi(3));

    build(0, 0, n - 1);

    for (auto &it : seg)
        cout << it[0] << ' ';
}