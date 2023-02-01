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

double values = -1.0;
map<string, vector<pair<string, double>>> graph;
map<string, bool> visited;
double dfs(string &num, string &dnm)
{
    visited[num] = true;
    if (num == dnm)
        return -values;
    for (auto &it : graph[num])
        if (visited[it.first] == false)
        {
            values *= it.second;
            dfs(it.first, dnm);
            visited[it.first] = false;
            if (values > 0)
                return values;
            values /= it.second;
        }
    return values;
}
vector<double> calcEquation(vector<vector<string>> equations, vector<double> values, vector<vector<string>> queries)
{
    vector<double> ans;
    int n = equations.size();
    for (int i = 0; i < n; i++)
    {
        graph[equations[i].front()].push_back({equations[i].back(), values[i]});
        graph[equations[i].back()].push_back({equations[i].front(), 1 / values[i]});
    }
    for (auto &it : queries)
    {
        ans.push_back(dfs(it.front(), it.back()));
        visited[it.front()] = false;
    }
    return ans;
}

signed main()
{
    calcEquation({{"a", "b"}, {"b", "c"}}, {2.0, 3.0}, {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}});
}