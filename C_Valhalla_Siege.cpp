#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
    int n, q;
    cin >> n >> q;
    vi str(n), fir(q);
    for (auto &it : str)
        cin >> it;
    for (auto &it : fir)
        cin >> it;
    vi prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        prefix[i] += prefix[i - 1] + str[i - 1];
    }
    int standing = 0;
    for (int i = 0; i < q; i++)
    {
        standing += fir[i];
        if (standing >= prefix[n])
        {
            cout << n << '\n';
            standing = 0;
        }
        else
        {
            int index = upper_bound(all(prefix), standing) - prefix.begin();
            cout << n - index + 1 << '\n';
        }
    }
}