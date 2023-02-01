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
        int n;
        cin >> n;
        string a;
        cin >> a;
        a.erase(unique(a.begin(), a.end()), a.end());
        n = a.size();
        if (a.size() == 1 and a != "W")
        {
            cout << "NO\n";
        }
        else if (a[0] == 'B' and a[1] == 'W')
        {
            cout << "NO\n";
        }
        else if (a[0] == 'R' and a[1] == 'W')
        {
            cout << "NO\n";
        }
        else if (a[n - 1] == 'B' and a[n - 2] == 'W')
        {
            cout << "NO\n";
        }
        else if (a[n - 1] == 'R' and a[n - 2] == 'W')
        {
            cout << "NO\n";
        }
        else if (a.find("WRW") != -1)
            cout << "NO\n";
        else if (a.find("WBW") != -1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}