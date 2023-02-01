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
        int n = a.size();
        int ca = 0, cb = 0;
        bool ans = true;
        if (a.back() == 'A')
            ans = false;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'A')
                ca++;
            else
                cb++;
            if (cb > ca)
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}