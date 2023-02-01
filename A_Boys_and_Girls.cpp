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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;
    string ans;
    int g = 0;
    if (n > m)
    {
        for (int i = 0; i < n + m; i++)
        {
            if (i & 1 and g < m)
            {
                ans += 'G';
                g++;
            }
            else
            {
                ans += 'B';
            }
        }
    }
    else
    {
        for (int i = 0; i < n + m; i++)
        {
            if (i & 1 and g < n)
            {
                ans += 'B';
                g++;
            }
            else
            {
                ans += 'G';
            }
        }
    }
    cout << ans;
}