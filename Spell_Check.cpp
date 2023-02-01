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

auto comp = [](pair<int, int> fir, pair<int, int> sec)
{
    if (sec.first < fir.first)
        return true;
    else if (sec.first == fir.first and sec.second < fir.second)
        return true;
    else
        return false;
};
long long totalCost(vector<int> &costs, int k, int candidates)
{
    long long ans = 0;
    int n = costs.size();
    if (2 * candidates >= n)
    {
        sort(costs.begin(), costs.end());
        return accumulate(costs.begin(), costs.begin() + k, 0ll);
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comp)> q(comp);
    int i = candidates, j = n - candidates - 1;
    int a = 0;
    while (a < i)
    {
        q.push({costs[a], a++});
    }
    a = n - 1;
    while (a > j)
    {
        q.push({costs[a], a--});
    }
    while (k > 0 and i <= j)
    {
        ans += q.top().first;
        if (q.top().second < i)
        {
            q.pop();
            q.push({costs[i], i++});
        }
        else
        {
            q.pop();
            q.push({costs[j], j--});
        }
        k--;
    }
    while (k > 0)
    {
        ans += q.top().first;
        q.pop();
        k--;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vi road{17, 12, 10, 2, 7, 2, 11, 20, 8};
    cout << totalCost(road, 3, 4);
}