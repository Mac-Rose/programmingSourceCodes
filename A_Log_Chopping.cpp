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
        vi v(n);
        int s = 0;
        int ans = 0;
        for (int &it : v)
        {
            cin >> it;
            if ((it & 1) == 0)
                ans++;
        }
        if ((ans & 1) == 0)
            cout << "maomao90";
        else
            cout << "errorgorn";

        cout << endl;
    }
}