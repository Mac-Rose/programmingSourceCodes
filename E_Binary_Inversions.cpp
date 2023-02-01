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
        vi v(n);
        vi zeroes(n);
        for (int &it : v)
        {
            cin >> it;
            if (it == 0)
                zeroes[&it - &v.front()]++;
        }
        partial_sum(all(zeroes), zeroes.begin());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i])
            {
                ans += zeroes.back() - zeroes[i];
            }
        }
        int ones = n - zeroes.back();
        int temp = ans, temp1 = ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                temp -= i;
                temp += (zeroes.back() - 1);
                break;
            }
        }
        for (int i = n - 1; i > -1; i--)
        {
            if (v[i])
            {
                temp1 -= (n - 1 - i);
                temp1 += (ones - 1);
                break;
            }
        }
        cout << max({ans, temp1, temp}) << endl;
    }
}