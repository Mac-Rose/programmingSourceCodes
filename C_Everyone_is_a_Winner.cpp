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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi ans;
        ans.pb(0);
        for (int i = 1; i <= sqrt(n); i++)
        {
            int a = n / i;
            ans.pb(i);
            ans.pb(a);
        }
        sort(all(ans));
        ans.erase(unique(all(ans)), ans.end());
        cout << ans.size() << endl;
        for (const int &it : ans)
            cout << it << " ";
        cout << endl;
    }
}