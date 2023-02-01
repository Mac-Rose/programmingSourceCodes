#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef vector<int> vi;

#define pb emplace_back
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007

int n;
vector<bool> subset_sum(int amnt, vi &v)
{
    vector<bool> dp(amnt + 1);
    dp.front() = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = amnt; j >= v[i]; j--)
        {
            if (dp[j - v[i]])
                dp[j] = true;
        }
    }
    return dp;
}
set<vi> ans;

void recursive_call(int req, vector<bool> &dp, vi &v, vi temp, int k)
{
    for (int i = k; v[i] <= req; i++)
    {
        if (dp[req - v[i]])
        {
            if (req - v[i] > 0)
            {
                temp.push_back(v[i]);
                recursive_call(req - v[i], dp, v, temp, i + 1);
                temp.pop_back();
            }
            else
            {
                temp.pb(v[i]);
                ans.emplace(temp);
                return;
            }
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vi ar(n);
    for (int &it : ar)
        cin >> it;
    sort(all(ar));
    int sum;
    cin >> sum;
    vector<bool> dp = subset_sum(sum, ar);
    vi temp;
    recursive_call(sum, dp, ar, temp, 0);
    for (auto &it : ans)
    {
        for (auto &i : it)
            cout << i << ' ';
        cout << endl;
    }
}