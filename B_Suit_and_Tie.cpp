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
    vi v(2 * n);
    int ans = 0;
    for (int &it : v)
        cin >> it;
    for (int i = 0; i < 2 * n; i += 2)
    {
        for (int j = i + 1; j < 2 * n; j++)
        {
            if (v[i] == v[j])
            {
                for (int k = j; k > i + 1; k--)
                {
                    swap(v[k], v[k - 1]);
                    ans++;
                }
                break;
            }
        }
    }
    cout << ans;
}