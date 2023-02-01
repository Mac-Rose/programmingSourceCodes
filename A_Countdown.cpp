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
        string a;
        cin >> a;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 and a[i] != '0')
                ans++;
            ans += a[i] - 48;
        }
        cout << ans << endl;
    }
}