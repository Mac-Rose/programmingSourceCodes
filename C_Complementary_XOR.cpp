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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

string flip(string a)
{
    string c;
    for (char &it : a)
    {
        it = 49 - it;
        c += it + 48;
    }
    return c;
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
        vector<pii> ans;
        if (count(all(a), '1') == n)
        {
            if (count(all(b), '1') == n)
            {
                cout << "YES\n";
                cout << 2 << endl;
                cout << "1 1" << endl;
                cout << 2 << ' ' << n << endl;
                continue;
            }
            ans.push_back({1, 1});
            if (a.front() == '1')
                a.front() = '0';
            else
                a.front() = '1';
            b = b.front() + flip(b.substr(1));
        }
        string c = flip(a);
        if (a == b)
        {
            a = c;
            ans.push_back({1, n});
            if (count(all(a), '1') % 2 == 0)
            {
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";

            for (int i = 0; i < n; i++)
            {
                if (a[i] == '1')
                    ans.push_back({i + 1, i + 1});
            }
            cout << ans.size() << endl;
            for (auto &[g, d] : ans)
                cout << g << ' ' << d << endl;
        }
        else
        {
            if (c == b)
            {
                if (count(all(a), '1') % 2 == 0)
                {
                    cout << "NO\n";
                    continue;
                }
                cout << "YES\n";

                for (int i = 0; i < n; i++)
                {
                    if (a[i] == '1')
                        ans.push_back({i + 1, i + 1});
                }
                cout << ans.size() << endl;
                for (auto &[g, d] : ans)
                    cout << g << ' ' << d << endl;
            }
            else
                cout << "NO\n";
        }
    }
}