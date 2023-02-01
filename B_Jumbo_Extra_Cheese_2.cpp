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
        vector<pii> v(n);
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            v[i] = {l, r};
        }
        sort(all(v));
        int ans, temp = 0;
        int le = -1;
        for (int i = 0; i < n; i++)
            temp += v[i].F, le = max(le, v[i].S);
        ans = le + temp;
        cout << 2 * ans << endl;
    }
}