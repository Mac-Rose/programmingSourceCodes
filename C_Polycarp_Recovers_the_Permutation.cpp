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
        vi v(n);
        for (auto &it : v)
            cin >> it;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (v.back() != n and v.front() != n)
            cout << -1;
        else
        {
            if (v.back() == n)
            {
                for (int i = n - 2; i > -1; i--)
                    cout << v[i] << ' ';
                cout << n;
            }
            else
            {
                cout << n << ' ';
                for (int i = n - 1; i > 0; i--)
                    cout << v[i] << ' ';
            }
        }
        cout << endl;
    }
}