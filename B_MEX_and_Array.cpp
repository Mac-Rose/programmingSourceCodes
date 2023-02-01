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
        int ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     int k = 1;
        //     for (int j = i; j < n; j++, k++)
        //     {
        //         if (v[j] == 0)
        //             ans += (n - j);
        //         ans++;
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            ans += (n - i) * (n - i + 1) / 2;
            if (v[i] == 0)
            {
                ans += (i + 1) * (n - i);
            }
        }
        cout << ans << endl;
    }
}