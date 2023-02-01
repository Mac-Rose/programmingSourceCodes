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
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (n == 1)
        {
            cout << "YES";
            cout << endl;
            continue;
        }
        bool ans = true;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                temp++;
            }
            else if (temp)
            {
                if (temp & 1)
                    ans = false;
                temp = 0;
            }
        }
        if (temp & 1)
            ans = false;
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}