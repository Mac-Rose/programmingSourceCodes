#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

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
        if (n > 45)
        {
            cout << -1;
            cout << endl;
            continue;
        }
        else
        {
            vi v;
            int k = 9;
            while (n > 0)
            {
                if (n >= k)
                {
                    v.pb(k);
                    k--;
                }
                else
                    v.pb(n);
                n -= v.back();
            }
            reverse(all(v));
            for (auto it : v)
                cout << it;
            cout << endl;
        }
    }
}