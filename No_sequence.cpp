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
        int n, k, s;
        cin >> n >> k >> s;
        vi ans(n);
        int i = 0;
        while (s)
        {
            if (i == n)
            {
                ans.front() = -2;
                break;
            }
            else if (s % k == 0 or s % k == 1)
            {
                ans[i] = (s % k);
                s /= k;
            }
            else if (s % k == k - 1)
            {
                ans[i] = -1;
                s /= k;
                s++;
            }
            else
            {
                ans.front() = -2;
                break;
            }
            i++;
        }
        if (ans.front() == -2)
            cout << -2;
        else
            for (int &it : ans)
                cout << it << ' ';
        cout << endl;
    }
}