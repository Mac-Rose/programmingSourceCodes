#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        if (a == 1)
        {
            if ((n - 1) % b == 0)
                cout << "Yes\n";
            else
                cout << "NO\n";
            continue;
        }
        int s = 1;
        int flag = 0;
        while (s <= n)
        {
            if ((n - s) % b == 0)
            {
                cout << "Yes\n";
                flag = 1;
                break;
            }
            s *= a;
        }
        if (flag != 1)
            cout << "No\n";
    }
}