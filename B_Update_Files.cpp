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
    int tst;
    cin >> tst;
    vi v(64);
    v.front() = 1;
    for (int i = 1; i < 64; i++)
    {
        v[i] = 2ll * v[i - 1];
    }
    while (tst--)
    {
        int n, c;
        cin >> n >> c;
        //Calculate the number of cable required at the begining of hr
        //Eg: in the begining of 0th hr we need 0 cables to operate at max capacity
        //  : in the begining of 1st hr we need 1 cables to operate at max capacity
        //  : in the begining of 2nd hr we need 2 cables to operate at max capacity
        //  : in the begining of 3rd hr we need 4 cables to operate at max capacity
        //  : in the begining of 4th hr we need 8 cables to operate at max capacity
        int ans = upper_bound(all(v), c) - v.begin();
        int hr = v[ans - 1];
        if (hr * 2ll >= n) //cables are in adequate amount
        {
            ans = lower_bound(all(v), n) - v.begin();
        }
        else
        {
            ans += (n - hr * 2ll - 1) / c + 1;
        }
        cout << ans << endl;
    }
}