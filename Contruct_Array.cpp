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
        if (n & 1)
            cout << -1;
        else
        {
            int j = n / 2;
            for (int i = 0, k = 1; i < (j - 1) / 2 + 1; i++)
            {
                v[2 * i] = k++;
                v[2 * i + 1] = 0;
            }
            for (int i = 0, k = 2; i < j / 2; i++, k++)
            {
                v[n - 2 * i - 1] = 0;
                v[n - 2 * i - 2] = k;
            }
            for (int &it : v)
                cout << it << ' ';
        }
        cout << endl;
    }
}