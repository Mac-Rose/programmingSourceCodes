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
#define MOD 1000000007
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int x = 1, y = 0;
    for (int i = 2; i <= n; i++)
    {
        y = 3 * x % MOD;
        if (i & 1)
            x = y + 1;
        else
            x = y - 1;
    }
    cout << y;
}