#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()

inline bool check(int x, vector<pii> &v)
{
    int n = v.size();
    int k = x - 1;
    int a = 0;
    for (int i = 0; i < n and k > -1; i++)
    {
        if (v[i].F >= k and v[i].S >= a)
        {
            k--;
            a++;
        }
    }
    if (k == -1)
        return true;
    else
        return false;
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
        int behind = 0;
        vector<pii> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        int l, r;
        l = 1, r = n;
        int ans = 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (check(mid, v) == true)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
}