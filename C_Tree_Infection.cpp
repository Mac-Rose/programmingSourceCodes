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
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

int help(int mid, vi &v)
{
    int idx = upper_bound(all(v), mid) - v.begin();
    idx = v.size() - idx;
    return accumulate(v.begin() + idx, v.end(), 0ll) - idx * mid;
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
        map<int, int> freq;
        freq[0] = 1;
        for (int i = 0; i < n - 1; i++)
        {
            int it;
            cin >> it;
            freq[it]++;
        }
        vi v;
        for (auto &it : freq)
            v.pb(it.S);
        sort(all(v));
        int ans = v.size();
        for (int i = v.size() - 1; i > -1; i--)
        {
            v[i] -= i + 1;
            v[i] = max(0ll, v[i]);
        }
        sort(all(v));
        int l = 0, r = v.back();
        int temp = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (help(mid, v) <= mid)
            {
                temp = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        ans += temp;
        cout << ans << endl;
    }
}