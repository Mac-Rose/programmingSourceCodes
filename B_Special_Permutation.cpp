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
        int n, a, b;
        cin >> n >> a >> b;
        int right = n - b, left = a - 1;
        if (a > b)
        {
            if (a == n / 2 + 1 and b == n / 2)
            {
                for (int i = b + 1; i <= n; i++)
                    cout << i << ' ';
                for (int i = a + 1; i <= b; i++)
                    cout << i << ' ';
                for (int i = 1; i < a; i++)
                    cout << i << ' ';
            }
            else
                cout << -1;
        }
        else if (left > n / 2 - 1 or right > n / 2 - 1)
            cout << -1;
        else
        {
            cout << a << ' ';
            for (int i = b + 1; i <= n; i++)
                cout << i << ' ';
            for (int i = a + 1; i <= b; i++)
                cout << i << ' ';
            for (int i = 1; i < a; i++)
                cout << i << ' ';
        }
        cout << endl;
    }
}