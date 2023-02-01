#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

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
        set<int> s(all(v));
        map<int, int> freq;
        int ma = 0;
        int temp;
        int ans = 0;
        if (s.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                freq[v[i]]++;
            }
            for (auto &it : freq)
            {
                if (it.S > ma)
                {
                    temp = it.F;
                    ma = it.S;
                }
            }
            int ans = n - ma;
            int l = 0, r = 32;
            int temp1 = 0;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if ((1ll << mid) * ma >= n)
                {
                    temp1 = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
            ans += temp1;
            cout << ans << endl;
        }
    }
}