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
        if (a.size() == 3)
        {
            cout << "YES\n2\n";
            cout << a.front() << ' ' << a.substr(1, 2) << endl;
        }
        else if (a.size() != 2)
        {
            cout << "YES\n2\n";
            cout << a.substr(0, n / 2 - 1) << ' ' << a.substr(n / 2 - 1, n - n / 2 + 1);
            cout << endl;
        }
        else if (a.front() < a.back())
        {
            cout << "YES\n2\n";
            cout << a.front() << ' ' << a.back() << endl;
        }
        else
            cout << "NO\n";
    }
}