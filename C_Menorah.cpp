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

int helper(string a, string b)
{
    int n = a.size();
    int cnt10, cnt01;
    cnt10 = cnt01 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' and b[i] == '0')
            cnt10++;
        else if (b[i] == '1' and a[i] == '0')
            cnt01++;
    }
    if (cnt01 == cnt10)
    {
        return 2ll * cnt10;
    }
    else
        return INT_MAX;
}
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
        string a, b;
        cin >> a >> b;
        string a1, a2;
        bool flag1 = false;
        for (int i = 0; i < n; i++)
        {
            if (flag1 == false and a[i] == b[i] and a[i] == '1')
            {
                a1 += '1';
                flag1 = true;
            }
            else
                a1 += 48 + (1 - (a[i] - 48));
        }
        bool flag2 = false;
        for (int i = 0; i < n; i++)
        {
            if (flag2 == false and '0' == b[i] and a[i] == '1')
            {
                a2 += '1';
                flag2 = true;
            }
            else
                a2 += 48 + (1 - (a[i] - 48));
        }
        int x = helper(a, b);
        int y = 1ll + helper(a1, b);
        if (flag1 == false)
            y = INT_MAX;
        int z = 1ll + helper(a2, b);
        if (flag2 == false)
            z = INT_MAX;
        int ans = min({x, y, z});
        if (ans >= INT_MAX)
            cout << -1;
        else
            cout << ans;
        cout << endl;
    }
}