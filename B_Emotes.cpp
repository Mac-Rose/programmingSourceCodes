#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

inline string long_multi(string a, string b)
{
    int len1 = a.size(), len2 = b.size();
    vi ans(len1 + len2);
    reverse(all(a)), reverse(all(b));
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {

            ans[i + j] += (a[i] - 48) * (b[j] - 48);
            ans[i + j + 1] = ans[i + j + 1] + ans[i + j] / 10;
            ans[i + j] %= 10;
        }
    }
    int flag = 1;
    reverse(all(ans));
    string res;
    for (int i = 0; i < len1 + len2; i++)
    {
        if (ans[i] == 0 and flag == 1)
            ;
        else
        {
            flag--;
            res += (ans[i] + 48);
        }
    }
    return res;
}

inline string long_add(string a, string b)
{
    int x, x1 = max(a.size() + 1, b.size() + 1);
    vi ans(x1);
    int l = x1 - a.size();
    for (int i = 0; i < l; i++)
    {
        a = "0" + a;
    }
    l = x1 - b.size();
    for (int i = 0; i < l; i++)
    {
        b = "0" + b;
    }
    int carry = 0;
    for (int i = x1 - 1; i > -1; i--)
    {
        x = (carry + a[i] + b[i] - 96);
        ans[i] = x % 10;
        carry = x / 10;
    }
    int flag = 1;
    string res;
    for (int i = 0; i < x1; i++)
    {
        if (ans[i] == 0 and flag == 1)
            ;
        else
        {
            flag--;
            res += (ans[i] + 48);
        }
    }
    return res;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    string K = to_string(k);
    vi v1(n);
    for (auto &it : v1)
        cin >> it;
    sort(all(v1));
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = to_string(v1[i]);
    }
    string ans;
    int g = m / (k + 1);
    string G = to_string(g);
    if (m % (k + 1) == 0)
    {
        ans = long_multi(long_add(long_multi(v.back(), K), v[n - 2]), G);
    }
    else
    {
        G = to_string(g);
        ans = long_multi(long_add(long_multi(v.back(), K), v[n - 2]), G);
        g = m % (k + 1);
        G = to_string(g);
        string ans1 = long_multi(v.back(), G);
        ans = long_add(ans1, ans);
    }
    cout << ans;
}