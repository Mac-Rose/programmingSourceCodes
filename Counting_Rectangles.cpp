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

int upper_bound(vector<pair<int, int>> &v, int target)
{
    int ans;
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid].first > target)
        {
            ans = v[mid].second;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
int lower_bound(vector<pair<int, int>> &v, int target)
{
    int ans;
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (v[mid].first >= target)
        {
            ans = v[mid].second;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
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
        int n, q;
        cin >> n >> q;
        vector<pii> v;
        vector<pii> w;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
            w.push_back({y, x});
        }
        sort(all(v));
        sort(all(w));
        while (q--)
        {
            int a1, b1, a2, b2;
            cin >> a1 >> b1 >> a2 >> b2;

            int c = upper_bound(v, a1);
            int d = lower_bound(v, a2) - 1;

            int c1 = upper_bound(w, b1);
            int d1 = upper_bound(w, b2 - 1);
        }
    }
}