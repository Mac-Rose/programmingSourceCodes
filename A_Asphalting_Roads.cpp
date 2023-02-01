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
    vector<bool> visited_row(n, false);
    vector<bool> visited_clm(n, false);
    vi ans;
    for (int i = 0; i < n * n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (visited_row[l - 1] == false and visited_clm[r - 1] == false)
        {
            ans.pb(i + 1);
            visited_row[l - 1] = true;
            visited_clm[r - 1] = true;
        }
    }
    for (int &it : ans)
        cout << it << ' ';
}