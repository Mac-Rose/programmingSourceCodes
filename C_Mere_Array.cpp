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
        vi v(n);
        for (auto &it : v)
            cin >> it;
        vi a(all(v));
        sort(all(a));
        if (a == v)
        {
            cout << "YES";
        }
        else
        {
            int x = *min_element(all(v));
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (gcd(v[i], x) != x)
                {
                    if (v[i] != a[i])
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            (flag) ? cout << "NO" : cout << "YES";
        }
        cout << endl;
    }
}