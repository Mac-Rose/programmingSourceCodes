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
        if (n < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n % 4)
            {
                for (int i = 1; i <= n - 4 - (n % 4); i += 4)
                {
                    cout << i + 1 << ' ' << i + 3 << ' ' << i << ' ' << i + 2 << ' ';
                }
                if (n % 4 == 1)
                {
                    int i = n - 4;
                    cout << i + 1 << ' ' << i + 3 << ' ' << i << ' ' << i + 4 << ' ' << i + 2 << ' ';
                }
                else if (n % 4 == 2)
                {
                    int i = n - 5;
                    cout << i + 1 << ' ' << i + 3 << ' ' << i << ' ' << i + 4 << ' ' << i + 2 << ' ' << i + 5 << ' ';
                }
                else
                {
                    int i = n - 6;
                    cout << i + 1 << ' ' << i + 3 << ' ' << i << ' ' << i + 4 << ' ' << i + 6 << ' ' << i + 2 << ' ' << i + 5 << ' ';
                }
                cout << endl;
            }
            else
            {
                for (int i = 1; i <= n; i += 4)
                {
                    cout << i + 1 << ' ' << i + 3 << ' ' << i << ' ' << i + 2 << ' ';
                }
                cout << endl;
            }
        }
    }
}