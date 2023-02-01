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
    sort(all(v));
    vi prefix(n / 2 + 1);
    prefix[0] = v[n / 2];
    for (int i = n / 2 + 1; i < n; i++)
    {
        prefix[i - n / 2] = v[i];
        prefix[i - n / 2] += prefix[i - n / 2 - 1];
    }
    int l = n / 2, r = n - 1, mid;
    int ans = v[n / 2];
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (v[mid] * (mid - n / 2 + 1) - prefix[mid - n / 2] <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    k -= v[ans] * (ans - n / 2 + 1) - prefix[ans - n / 2];
    int Ans = v[ans];
    Ans += (k / (ans - n / 2 + 1));
    cout << Ans;
}