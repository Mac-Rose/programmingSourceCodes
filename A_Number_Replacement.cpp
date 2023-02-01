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
        string a;
        map<int, vi> freq;
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            freq[v[i]].pb(i);
        }
        bool ans = true;
        for (auto &it : freq)
        {
            for (int &i : it.second)
            {
                if (a[i] != a[it.second.front()])
                {
                    ans = false;
                }
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}