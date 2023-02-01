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
        int n, k;
        cin >> n >> k;
        vi v(n), prefix_sum;
        for (int &it : v)
            cin >> it;
        sort(all(v));
        prefix_sum = v;
        partial_sum(all(prefix_sum), prefix_sum.begin());
        if (prefix_sum.back() <= k)
        {
            cout << "0\n";
            continue;
        }
        int ans = prefix_sum.back() - k;
        for (int i = n - 1; i > -1; i--)
        {
            int temp;
            if (i == 0)
            {
                temp = k / n;
                if (temp >= prefix_sum.front())
                    ans = min(ans, n - 1);
                else
                    ans = min(ans, prefix_sum.front() - temp + n - 1);
            }
            else
            {
                temp = prefix_sum[i - 1] - prefix_sum.front();
                int x = (k - temp) / (n - i + 1);
                if (temp > k)
                {
                    temp -= k;
                    temp = (temp - 1) / (n - i + 1) + 1;
                    ans = min(ans, n - i + temp + prefix_sum.front());
                }
                else
                {
                    if (x >= prefix_sum.front())
                        ans = min(ans, n - i);
                    else
                    {
                        ans = min(ans, prefix_sum.front() - x + n - i);
                    }
                }
            }
        }
        cout << ans << endl;
    }
}