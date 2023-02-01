#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

// #define int long long
// using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

template <class T>
using multi_oset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

int helper(int j, int i, vector<vector<int>> &help)
{
    int ans = 0;
    for (int &it : help[j])
        if (it < i)
            ans++;
    return ans;
}
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
        for (int &it : v)
            cin >> it;
        multi_oset<int> s1;
        vector<int> s2;
        vector<vector<int>> help(n);
        for (int j = n - 1; j >= 3; j--)
            s2.pb(v[j]);
        for (int i = 3; i < n; i++)
        {
            help[i] = s2;
            s2.erase(find(all(s2), v[i]));
        }
        int ans = 0;
        for (int i = 1; i <= n - 3; i++)
        {
            s1.insert(v[i - 1]);
            for (int j = i + 1; j < n - 1; j++)
            {
                ans += s1.order_of_key(v[j]) * (helper(j + 1, v[i], help));
                // s2.erase(s2.upper_bound(v[j + 1]));
            }
        }
        cout << ans << endl;
    }
}