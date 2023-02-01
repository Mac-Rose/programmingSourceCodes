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
        string a;
        cin >> a;
        vector<vi> prefix(n + 1, vi(3));
        if (a.front() == '-')
            prefix[1][0]++;
        else
            prefix[1][1]++;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '-')
            {
                prefix[i + 1][0]++;
                if (a[i - 1] == '-')
                    prefix[i + 1][2]++;
            }
            else
                prefix[i + 1][1]++;
            prefix[i + 1][0] += prefix[i][0];
            prefix[i + 1][1] += prefix[i][1];
            prefix[i + 1][2] += prefix[i][2];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
            for (int j = i + 1; j <= n; j++)
            {
                int p = prefix[j][1] - prefix[i - 1][1];
                int n = prefix[j][0] - prefix[i - 1][0];
                int con = prefix[j][2] - prefix[i - 1][2];
                if (n >= p)
                {
                    if ((n - p) % 3 == 0 and (n - p) / 3 <= con)
                        ans++;
                }
            }
        cout << ans << endl;
    }
}