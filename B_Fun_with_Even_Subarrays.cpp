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
        int ans = 0;
        for (int &it : v)
            cin >> it;
        reverse(all(v));
        int las = v.front();
        int cur = 1;
        while (cur < n)
        {
            if (v[cur] != las)
            {
                v[cur] = las;
                ans++;
                cur *= 2;
            }
            else
                cur++;
        }
        cout << ans << endl;
    }
}