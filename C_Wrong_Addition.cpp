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
        string a, s;
        cin >> a >> s;
        string ans;
        int k = s.size() - 1;
        int x = a.size();
        int i;

        for (int l = 0; l < k + 1 - x; l++)
        {
            a = '0' + a;
        }
        for (i = a.size() - 1; i > -1 and k > -1; i--)
        {
            if (s[k] >= a[i])
            {
                ans = to_string(s[k] - a[i]) + ans;
                k--;
            }
            else if (k == 0 or a[i] - 48 + 9 < (s[k - 1] - 48) * 10 + s[k] - 48 or s[k - 1] != '1')
            {
                ans = "-1";
                break;
            }
            else
            {
                ans = to_string((s[k - 1] - 48) * 10 + s[k] - 48 - (a[i] - 48)) + ans;
                k -= 2;
            }
        }
        string g = a.substr(0, i + 1);
        if (g != "")
        {
            int temp = 0;
            for (int i = 0; i < g.size(); i++)
                temp += g[i] - 48;
            if (temp != 0)
                ans = "-1";
        }
        int h = stoll(ans);
        cout << h << endl;
    }
}