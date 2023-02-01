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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        vi prefix(n + 1);
        for (int i = 1; i <= n; i++)
        {
            prefix[i] += prefix[i - 1];
            prefix[i] += v[i - 1];
        }

        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + v[i];

        vector<bool> special(n + 1, false);

        for (int i = 0; i < n; i++)
            for (int j = i + 2; j <= n && prefix[j] - prefix[i] <= n; j++)
                special[prefix[j] - prefix[i]] = true;

        int total = 0;

        for (int a : v)
            total += special[a];

        cout << total << '\n';
    }
}