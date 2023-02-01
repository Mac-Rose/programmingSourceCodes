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

inline string long_multi(string a, string b)
{
    if (a.size() == 0)
        a = "0";
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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> v(n);
    bool flag = false;
    int z = 0;
    for (auto &it : v)
    {
        cin >> it;
        if (it.size() == count(all(it), '0'))
            flag = true;
        for (int j = it.size() - 1; j > -1; j--)
        {
            if (it[j] == '0')
            {
                z++;
            }
            else
            {
                j++;
                it.erase(it.begin() + j, it.end());
                break;
            }
        }
    }
    string ans = "1";

    for (int i = 0; i < n; i++)
    {
        string temp = v[i];
        ans = long_multi(temp, ans);
    }
    if (flag)
    {
        cout << "0";
        exit(0);
    }
    cout << ans;
    while (z--)
        cout << '0';
}