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
    int n;
    cin >> n;
    string a;
    cin >> a;
    map<int, vi> freq;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]].pb(i);
    }
    int q;
    cin >> q;
    while (q--)
    {
        string t;
        cin >> t;
        int ans = 0;
        map<int, int> req;
        for (int i = 0; i < t.size(); i++)
        {
            req[t[i]]++;
        }
        for (auto &it : req)
        {
            ans = max(ans, freq[it.F][it.S - 1]);
        }
        cout << ans + 1 << endl;
    }
}