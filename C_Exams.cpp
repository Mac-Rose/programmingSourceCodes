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
    int n;
    cin >> n;
    vector<pii> v;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v.push_back({l, r});
    }
    sort(all(v));
    int mi = 0;
    for (auto it : v)
    {
        int x = min(it.F, it.S);
        if (x >= mi)
            mi = x;
        else
            mi = max(it.F, it.S);
    }
    cout << mi;
}