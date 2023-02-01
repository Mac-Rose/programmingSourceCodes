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
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(2);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            v[g]++;
        }
        if (v[1] > n / 2)
        {
            cout << 2 * (v[1] / 2) << endl;
            for (int i = 0; i < 2 * (v[1] / 2); i++)
                cout << 1 << ' ';
            cout << endl;
        }
        else
        {
            cout << v[0] << endl;
            for (int i = 0; i < v[0]; i++)
                cout << 0 << ' ';
            cout << endl;
        }
    }
}