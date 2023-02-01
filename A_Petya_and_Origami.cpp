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
    int n, k;
    cin >> n >> k;
    int ans = 0;
    ans += (2 * n - 1) / k + 1;
    ans += (5 * n - 1) / k + 1;
    ans += (8 * n - 1) / k + 1;
    cout << ans;
}