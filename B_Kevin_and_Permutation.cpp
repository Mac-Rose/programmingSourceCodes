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
        cin >> n;
        vi v(n);
        // if (n & 1)
        // {

        // }
        // else
        {
            int k = n;
            for (int i = 1; i < n; i += 2)
            {
                v[i] = k--;
            }
            for (int i = 0; i < n; i += 2)
                v[i] = k--;
        }
        for (int &it : v)
            cout << it << ' ';
        cout << endl;
    }
}