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
        string a;
        cin >> a;
        int f = 0, s = 0;
        for (int i = 0; i < 3; i++)
        {
            f += a[i];
        }
        for (int i = 3; i < 6; i++)
            s += a[i];
        if (f == s)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}