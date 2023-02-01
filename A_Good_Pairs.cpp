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
        vi v(n);
        int mi = 0, ma = 0;
        for (int &it : v)
        {
            cin >> it;
            if (it > v[ma])
                ma = &it - &v[0];
            if (it < v[mi])
                mi = &it - &v[0];
        }
        cout << mi + 1 << ' ' << ma + 1 << endl;
    }
}