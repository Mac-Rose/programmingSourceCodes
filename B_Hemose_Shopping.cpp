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
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        vi a = v;
        sort(all(a));
        if (v == a)
            cout << "YES";
        else
        {
            int l = n - k;
            int flag = 1;
            for (int i = l; i < n - l; i++)
            {
                if (v[i] != a[i])
                {
                    cout << "NO";
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << "YES";
        }
        cout << '\n';
    }
}