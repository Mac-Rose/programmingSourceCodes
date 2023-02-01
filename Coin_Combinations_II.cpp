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

int change(int amount, vector<int> &coins)
{
    int n = coins.size();
    vi ans(amount + 1);
    ans.front() = 1;
    for (int &it : coins)
    {
        for (int j = it; j <= amount; j++)
        {
            ans[j] = ans[j] + ans[j - it] % MOD;
            ans[j] = ans[j] % MOD;
        }
    }
    return ans.back();
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, amount;
    cin >> n >> amount;
    vi v(n);
    for (int &it : v)
        cin >> it;
    cout << change(amount, v);
}