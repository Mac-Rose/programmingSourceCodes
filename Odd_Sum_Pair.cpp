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
#define Endl '\n'
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
        n = 3;
        vi v(n);
        int odd = 0;
        for (int &it : v)
        {
            cin >> it;
            if (it & 1)
                odd++;
        }
        if (odd < 3 and odd > 0)
            cout << "YES";
        else
            cout << "NO";
        cout << Endl;
    }
}