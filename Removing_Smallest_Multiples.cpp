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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;
long findMaximumSum(vector<int> stockPrice, int k)
{
    queue<int> q;
    long ans = -1, temp = 0;
    int i = 0;
    int n = stockPrice.size();
    set<int> s;
    while (i < n)
    {
        if (s.find(stockPrice[i]) != s.end())
        {
            while (q.front() != stockPrice[i])
            {
                temp -= q.front();
                s.erase(q.front());
                q.pop();
                // ans = max(ans, temp);
            }
            q.pop();
            s.erase(stockPrice[i]);
            temp -= stockPrice[i];
            // ans = max(ans, temp);
        }
        if (q.size() < k)
        {
            q.push(stockPrice[i]);
            s.emplace(stockPrice[i]);
            temp += stockPrice[i];
            if (q.size() == k)
                ans = max(ans, temp);
        }
        else
        {
            s.erase(q.front());
            temp -= q.front();
            q.pop();
            ans = max(ans, temp);
            q.push(stockPrice[i]);
            s.emplace(stockPrice[i]);
            temp += stockPrice[i];
            ans = max(ans, temp);
        }
        i++;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << findMaximumSum({1, 2, 4, 4}, 4);
}