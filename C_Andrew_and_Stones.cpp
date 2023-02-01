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
        vi odd;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            v[i] = g;
            if ((g & 1) and i > 0 and i < n - 1)
            {
                odd.pb(i);
            }
        }
        int k = 0;
        int ans = 0;
        vi right;
        for (int i = 1; i < n - 1; i++)
        {
            if (k < odd.size() and i == odd[k])
            {
                right.pb(i);
                k++;
            }
            while (v[i] > 1 and k < odd.size())
            {
                v[i] -= 2;
                if (right.size() > 0)
                {
                    v[right.back()]++;
                    right.pop_back();
                }
                if (k < odd.size())
                {
                    v[odd[k]]++;
                    k++;
                }
                ans++;
            }
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] & 1)
            {
                ans = -1;
                break;
            }
            else
            {
                ans += v[i] / 2;
            }
        }
        cout << ans << endl;
    }
}