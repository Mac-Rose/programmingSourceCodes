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

unsigned ho2(unsigned x)
{

    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;

    return x ^ (x >> 1);
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
        vi v(n), temp;
        for (auto &it : v)
            cin >> it;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i - 1])
                temp.pb(v[i] - v[i - 1]);
        }
        sort(all(temp));
        int x = v.back();
        int ans = ho2(x);
        cout << ans << endl;
    }
}