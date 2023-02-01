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
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    double ans = -1;
    for (int i = 0; i < n; i++)
    {
        int idx = upper_bound(v.begin() + i, v.end(), v[i] + k) - v.begin();
        idx--;
        if (idx == i or idx == i + 1)
            continue;
        else
        {
            int num = v[idx] - v[i + 1];
            int dnm = v[idx] - v[i];
            double x = (num * 1.0) / dnm;
            if (x > ans)
                ans = x;
        }
    }
    cout << setprecision(12) << ans;
}