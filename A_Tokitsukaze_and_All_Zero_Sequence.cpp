#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
vector<vector<int>> ans;
vector<int> temp;
vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
vector<vector<int>> dp;
void print(int n, int k)
{
    if (temp.size() > k)
        return;
    if (n == 0)
    {
        if (temp.size() < k)
            return;
        else
            ans.push_back(temp);
    }
    for (int &it : dp[n])
    {
        if (temp.empty() == false and temp.back() <= v[it])
            continue;
        temp.push_back(v[it]);
        print(n - v[it], k);
        temp.pop_back();
    }
}
void combinationSum3(int k, int n)
{
    dp.resize(n + 1);
    dp.front().pb(-1);
    for (int i = 0; i < 9; i++)
    {
        for (int j = n; j >= v[i]; j--)
        {
            if (dp[j - v[i]].size())
                dp[j].push_back(i);
        }
    }
    print(n, k);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    combinationSum3(3, 15);
    for (auto &it : ans)
    {
        for (int &i : it)
            cout << i << ' ';
        cout << endl;
    }
}
