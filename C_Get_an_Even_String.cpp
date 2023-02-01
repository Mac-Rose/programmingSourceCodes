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
        int ans = 0;
        int start = 0;
        set<int> s;
        for (int i = 0; i < a.size(); i++)
        {
            if (s.find(a[i]) == s.end())
            {
                s.emplace(a[i]);
            }
            else
            {
                ans += i - start - 1;
                s.clear();
                start = i + 1;
            }
        }
        ans += a.size() - start;
        cout << ans << endl;
    }
}