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

inline string decimal_to_string(int n)
{
    string a;
    for (int i = 0; i < ceil(log2(n) + 1); i++)
    {
        int k = n >> i;
        if (k & 1)
            a += '1';
        else
            a += '0';
    }

    return a;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, l, r, x, ans = 0;
    cin >> n >> l >> r >> x;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    sort(all(v));
    for (int i = 3; i <= (1ll << n) - 1; i++)
    {
        string a = decimal_to_string(i);
        if (count(all(a), '1') > 1)
        {
            vi temp;
            int sum = 0;
            for (int j = 0; j < a.size(); j++)
            {
                if (a[j] == '1')
                {
                    temp.pb(v[j]);
                    sum += temp.back();
                }
            }
            if (temp.back() - temp.front() >= x and sum >= l and sum <= r)
                ans++;
        }
    }
    cout << ans;
}