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
        if (n % 7 == 0)
            cout << n;
        else
        {
            int rem = n % 7;
            int rem1 = 7 - (n % 7);
            int a, b;
            a = n, b = n;
            if ((a - rem) / 10 == a / 10)
                cout << a - rem;
            else
                cout << b + rem1;
        }
        cout << endl;
    }
}