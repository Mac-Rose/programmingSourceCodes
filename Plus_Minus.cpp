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
        int l = 1, r = n - 2;
        int ans = INT64_MAX;
        int temp = 0;
        int ma = v[l];
        pii ans1 = {1, 1};
        int start = l;
        while (l <= r)
        {
            temp += v[l];
            ma = max(ma, v[l]);
            if (temp - ma > 0)
            {
                temp = v[l];
                ma = v[l];
                start = l;
            }
            if (temp - ma < ans)
            {
                ans = temp - ma;
                ans1 = {start, l};
            }
            l++;
        }
        int temp1 = 0;
        for (int i = 0; i < ans1.F - 1; i++)
        {
            temp1 += v[i];
        }
        for (int i = ans1.S + 2; i < n; i++)
            temp1 += v[i];
        temp1 += ans;
        cout << temp1 << endl;
    }
}