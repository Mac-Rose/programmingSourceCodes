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
        for (int &it : v)
            cin >> it;
        sort(all(v));
        int l = 0, r = n - 1;
        bool ans = false;
        int sr = 0, cr = 0, sb = 0, cb = 0;
        while (l <= r)
        {
            while (sr <= sb and l <= r)
            {
                sr += v[r];
                cr++;
                r--;
            }
            while (cr >= cb and l <= r)
            {
                sb += v[l];
                cb++;
                l++;
            }
            if (sr > sb and cb > cr)
            {
                ans = true;
                break;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}