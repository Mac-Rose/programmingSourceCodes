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
    int n, m;
    cin >> n >> m;

    map<string, int> freq;
    for (int i = 0; i < n; i++)
    {
        string a1;
        cin >> a1;
        freq[a1]++;
    }
    for (int i = 0; i < m; i++)
    {
        string a1;
        cin >> a1;
        freq[a1]++;
    }
    vector<string> duplicate;
    for (auto &it : freq)
    {
        if (it.S > 1)
        {
            duplicate.pb(it.F);
        }
    }
    int ans = 0;
    if (duplicate.size() % 2 == 0)
    {
        if (n - duplicate.size() > m - duplicate.size())
            ans = 0;
        else
            ans = 1;
    }
    else
    {
        if (n - duplicate.size() + 1 > m - duplicate.size())
            ans = 0;
        else
            ans = 1;
    }
    (ans) ? cout << "NO" : cout << "YES";
}