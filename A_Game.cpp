#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007

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
        int t1 = 0, t2 = 0;
        for (int &it : v)
        {
            cin >> it;
            t2 = (&it - &v[0]) - 1;
        }
        for (int i = n - 1; i > -1; i--)
        {
            if (v[i] == 0)
            {
                t1 = i + 1;
                break;
            }
        }
        (t1 - t2 <= 1) ? cout << 0 : cout << t1 - t2;
        cout << endl;
    }
}