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
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    vi ans(n);
    for (int i = 0, k = INT_MAX; i < n; i++)
    {
        if (v[i] == 0)
        {
            k = 0;
            ans[i] = 0;
        }
        else
        {
            k++;
            ans[i] = k;
        }
    }
    for (int i = n - 1, k = INT_MAX; i > -1; i--)
    {
        if (v[i] == 0)
        {
            k = 0;
            ans[i] = 0;
        }
        else
        {
            k++;
            ans[i] = min(ans[i], k);
        }
    }
    for (auto &it : ans)
        cout << it << ' ';
}