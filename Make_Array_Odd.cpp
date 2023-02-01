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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (int &it : v)
        {
            cin >> it;
            it %= 2;
        }
        if (k & 1)
        {
            int c = count(all(v), 0);
            if (c == 0)
                cout << 0 << endl;
            else
                cout << (c - 1) / 2 + 1;
        }
        else
        {
            int odd = count(all(v), 1);
            int even = count(all(v), 0);
            if (odd == 0)
                even = -1;
            cout << even;
        }
        cout << endl;
    }
}