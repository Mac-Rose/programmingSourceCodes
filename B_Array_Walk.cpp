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

int maxpair(vi v, int j, int k)
{
    if (j == 0)
        return 0ll;
    int z = k - 2 * j;
    int max = 0;
    for (int i = 0; i <= z; i++)
    {
        int x = v[i] + v[i + 1];
        if (x > max)
        {
            max = x;
        }
    }
    return max * j;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k, z;
        cin >> n >> k >> z;
        vi v(n);
        vi V;
        for (int &it : v)
            cin >> it;
        V = v;
        partial_sum(all(v), v.begin());
        int temp = 0ll;
        for (int i = 0; i <= z; i++)
        {
            if (k - 2 * i < 0)
                break;
            int ans = v[k - 2 * i];
            ans += maxpair(V, i, k);
            temp = max(ans, temp);
        }
        cout << temp << endl;
    }
}