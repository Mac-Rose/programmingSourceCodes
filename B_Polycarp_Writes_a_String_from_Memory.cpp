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
        string a;
        cin >> a;
        int n = a.size();
        int ans = 0, i = 0;
        set<int> s;
        while (i < n)
        {
            s.emplace(a[i]);
            if (s.size() > 3)
            {
                s.clear();
                s.emplace(a[i]);
                ans++;
            }
            i++;
        }
        if (s.empty() == false)
        {
            ans++;
        }
        cout << ans << endl;
    }
}