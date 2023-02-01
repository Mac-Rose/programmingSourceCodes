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
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n * k; i++)
            {
                cout << i << endl;
            }
        }
        else if (n & 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                int m;
                if ((i & 1) == 0)
                {
                    m = i * k + 1;
                }
                else
                {
                    m = (i - 1) * k + 2;
                }
                for (int j = 0; j < k; j++, m += 2)
                {
                    cout << m << ' ';
                }
                cout << endl;
            }
        }
    }
}