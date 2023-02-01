#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int &it : v) cin >> it;
        int lcm = v.front();
        for (int i = 0; i < n; i++)
        {
            lcm = v[i] * lcm / __gcd(v[i], lcm);
        }
        lcm %= 7;
        if (lcm)cout << lcm;
        else cout << 7;
        cout << endl;
    }
}