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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    int s = 0;
    for (int &it : v)
    {
        cin >> it;
        s += it;
    }
    vi ans;
    for (int &it : v)
        if ((s - it) == it * (n - 1))
            ans.pb(&it - &v[0] + 1);
    cout << ans.size() << endl;
    for (int &it : ans)
        cout << it << ' ';
}