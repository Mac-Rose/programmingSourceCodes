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
#define Endl '\n'
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
        if (a.front() == 'e')
        {
            a = 'Y' + a;
        }
        else if (a.front() == 's')
        {
            a = "Ye" + a;
        }
        bool ans = true;
        for (int i = 0; i < a.size(); i += 3)
        {
            if (a[i] != 'Y')
            {
                ans = false;
                break;
            }
            if (i + 1 < a.size() and a[i + 1] != 'e')
            {
                ans = false;
                break;
            }
            if (i + 2 < a.size() and a[i + 2] != 's')
            {
                ans = false;
                break;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}