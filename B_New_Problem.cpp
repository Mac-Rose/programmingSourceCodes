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
    set<string> reg;
    vector<string> v = {""};
    vector<char> g;
    for (int i = 97; i < 123; i++)
        g.pb(i);
    for (int i = 0; i < 27; i++)
    {
        for (char &it : g)
            v.pb(v[i] + it);
    }
    while (tst--)
    {
        string a;
        cin >> a;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                reg.emplace(a.substr(i, 1));
                break;
            }
            reg.emplace(a.substr(i, 1));
            reg.emplace(a.substr(i, 2));
        }
    }
    int i = 1;
    while (reg.find(v[i]) != reg.end())
    {
        i++;
    }
    cout << v[i];
}