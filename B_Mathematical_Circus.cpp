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
        if (k % 4 == 1 or k % 4 == 3)
        {
            cout << "YES\n";
            {
                for (int i = 1; i < n; i += 2)
                {
                    cout << i << " " << i + 1 << endl;
                }
            }
        }
        else if (k % 4 == 2)
        {
            cout << "YES\n";
            for (int i = 1; i <= n; i += 4)
                cout << i + 1 << " " << i << endl;
            for (int i = 3; i <= n; i += 4)
                cout << i << " " << i + 1 << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}