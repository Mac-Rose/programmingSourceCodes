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
        for (int &it : v)
        {
            cin >> it;
            it = (it & 1);
        }
        bool flag = true;
        for (int i = 0; i < n; i += 2)
            if (v[i] != v[0])
            {
                flag = false;
                break;
            }
        for (int i = 1; i < n; i += 2)
            if (v[i] != v[1])
            {
                flag = false;
                break;
            }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}