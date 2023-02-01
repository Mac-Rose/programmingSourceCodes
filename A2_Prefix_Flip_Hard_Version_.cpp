#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
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
        string a1, b1;
        cin >> a1 >> b1;
        a1 += '0';
        b1 += '0';
        vi v;
        for (int i = 1; i <= n; i++)
        {
            if (a1[i] != a1[i - 1])
                v.pb(i);
        }
        for (int i = n; i > 0; i--)
        {
            if (b1[i] != b1[i - 1])
            {
                v.pb(i);
            }
        }
        cout << v.size() << " ";
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
}