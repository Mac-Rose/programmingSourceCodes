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
        int n, q;
        cin >> n >> q;
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v), greater<int>());
        partial_sum(all(v), v.begin());
        int max = v.back();
        for (int i = 0; i < q; i++)
        {
            int qu;
            cin >> qu;
            if (qu > max)
                cout << -1;
            else
            {
                int ans = lower_bound(all(v), qu) - v.begin();
                cout << ++ans;
            }
            cout << endl;
        }
    }
}