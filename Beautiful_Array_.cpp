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
#define mod 1000000007
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi arr(n);
        int ans = 1;
        for (auto &it : arr)
        {
            cin >> it;
            if (it >= 0)
                it = -(++it);
            ans = (ans * (it % mod)) % mod;
        }
        if (n & 1)
        {
            sort(all(arr));
            ans /= arr.front();
            arr.front() *= -1;
            arr.front()--;
            ans *= arr.front();
        }
        cout << ans << endl;
    }
}