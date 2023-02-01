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
    vi l, r;
    pii max = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (b - a > max.F)
            max = {b - a, i + 1};
        l.emplace_back(a);
        r.emplace_back(b);
    }
    int mi = *min_element(all(l));
    int ma = *max_element(all(r));
    if (l[max.S - 1] > mi or r[max.S - 1] < ma)
        cout << -1;
    else
        cout << max.S;
}