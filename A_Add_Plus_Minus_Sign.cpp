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
        int ans = 0;
        string ans1;
        for (int i = 0; i < n; i++)
        {
            int c = a[i] - 48;
            if (c == 1)
            {
                if (ans <= 0)
                {
                    ans += c;
                    ans1 += '+';
                }
                else if (ans > 0)
                {
                    ans -= c;
                    ans1 += '-';
                }
            }
            else
            {
                ans1 += '+';
            }
        }
        cout << ans1.substr(1, n - 1) << endl;
    }
}