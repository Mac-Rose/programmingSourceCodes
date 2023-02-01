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
        string a;
        cin >> a;
        if (n == 1)
            cout << a << a << endl;
        else if (a[0] == a[1])
            cout << a.front() << a.front() << endl;
        else
        {
            int i = 1;
            while (a[i] <= a[i - 1] and i < n)
                i++;
            if (i == n)
            {
                string x = a;
                reverse(all(x));
                cout << a << x << endl;
            }
            else
            {
                a = a.substr(0, i);
                string x = a;
                reverse(all(x));
                cout << a << x << endl;
            }
        }
    }
}