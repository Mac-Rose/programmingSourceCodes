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
    string a;
    cin >> a;
    int ans = 0;
    int n = a.size();
    if ((a.front() - 48) % 4 == 0)
        ans++;
    for (int i = 1; i < n; i++)
    {
        if (((a[i - 1] - 48) * 10 + a[i] - 48) % 4 == 0)
        {
            ans += i;
        }
        if ((a[i] - 48) % 4 == 0)
            ans++;
    }
    cout << ans;
}