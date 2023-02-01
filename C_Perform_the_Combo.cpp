#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

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
        string a;
        cin >> a;
        vi v(n, 0);
        v.back() = 1;
        for (int i = 0; i < q; i++)
        {
            int g;
            cin >> g;
            v[g - 1]++;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            v[i] += v[i + 1];
        }
        vi ans(26, 0);
        for (int i = 0; i < n; i++)
        {
            ans[a[i] - 97] += v[i];
        }
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}