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
        int ans = 0;
        for (char &it : a)
        {
            ans += it - 96;
        }
        if (n == 1)
        {
            cout << "Bob ";
            cout << ans;
        }
        else if (n & 1)
        {
            cout << "Alice ";
            int x = ans - a.front() + 96 - a.front() + 96;
            int y = ans - a.back() + 96 - a.back() + 96;
            cout << max(x, y);
        }
        else
        {
            cout << "Alice ";
            cout << ans;
        }
        cout << endl;
    }
}