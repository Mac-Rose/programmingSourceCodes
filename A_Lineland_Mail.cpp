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
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cout << v[1] - v.front();
        else if (i == n - 1)
            cout << v.back() - v[n - 2];
        else
            cout << min(v[i] - v[i - 1], v[i + 1] - v[i]);
        cout << ' ' << max(v[i] - v.front(), v.back() - v[i]) << endl;
    }
}