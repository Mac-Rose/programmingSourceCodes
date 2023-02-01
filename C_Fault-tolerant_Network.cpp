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
#define MOD 1000000007

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
        vi a(n), b(n);
        for (int &it : a)
            cin >> it;
        for (int &it : b)
            cin >> it;
        int temp1 = INT64_MAX;
        int temp2 = INT64_MAX;
        int temp3 = INT64_MAX;
        int temp4 = INT64_MAX;
        int ans = abs(a.front() - b.front()) + abs(a.back() - b.back());
        ans = min(ans, abs(a.back() - b.front()) + abs(a.front() - b.back()));
        for (int i = 0; i < n; i++)
        {
            if (abs(a.front() - b[i]) < temp1)
            {
                temp1 = abs(a.front() - b[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(a.back() - b[i]) < temp3)
            {
                temp3 = abs(a.back() - b[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(b.front() - a[i]) < temp2)
            {
                temp2 = abs(b.front() - a[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (abs(b.back() - a[i]) < temp4)
            {
                temp4 = abs(b.back() - a[i]);
            }
        }
        ans = min(ans, temp1 + temp2 + temp3 + temp4);
        ans = min(ans, abs(a.back() - b.back()) + temp1 + temp2);
        ans = min(ans, abs(a.front() - b.front()) + temp3 + temp4);
        ans = min(ans, abs(a.back() - b.front()) + temp1 + temp4);
        ans = min(ans, abs(a.front() - b.back()) + temp2 + temp3);
        cout << ans << endl;
    }
}