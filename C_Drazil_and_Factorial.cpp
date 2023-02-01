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
    int n;
    cin >> n;
    string a;
    cin >> a;
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - 48 == 4)
        {
            ans += "322";
        }
        else if (a[i] - 48 == 6)
        {
            ans += "35";
        }
        else if (a[i] - 48 == 8)
        {
            ans += "7222";
        }
        else if (a[i] - 48 == 9)
        {
            ans += "7332";
        }
        else if (a[i] - 48 > 1)
        {
            ans += a[i];
        }
    }
    sort(all(ans));
    reverse(all(ans));
    cout << ans;
}