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
        vi v(n);
        for (auto &it : v)
            cin >> it;
        int mi = INT_MAX, ans = -1;
        for (int i = 0; i + k < n; i++)
        {
            if (v[i + k] - v[i] < mi)
            {
                mi = v[i + k] - v[i];
                ans = i;
            }
        }
        cout << (v[ans] + v[ans + k]) / 2 << '\n';
    }
}