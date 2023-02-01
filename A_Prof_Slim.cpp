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
        vi a(n);
        int cnt = 0;
        for (int &it : a)
        {
            cin >> it;
            if (it < 0)
                cnt++;
        }
        for (int i = 0; i < cnt; i++)
        {
            if (a[i] > 0)
                a[i] *= -1;
        }
        for (int i = cnt; i < n; i++)
        {
            if (a[i] < 0)
                a[i] *= -1;
        }
        bool ans = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                ans = false;
                break;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}