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
        int n;
        cin >> n;
        vi v(n);
        map<int, int> m;
        set<int> ans;
        for (int &it : v)
        {
            cin >> it;
            m[it]++;
            if (m[it] >= 3)
                ans.emplace(it);
        }
        if (ans.empty())
            cout << -1 << endl;
        else
            cout << *ans.begin() << endl;
    }
}