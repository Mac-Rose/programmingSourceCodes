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

void DFS(int src, int &ep, vi &path, vi temp, map<int, vi> &Graph, vector<bool> visited)
{
    temp.push_back(src);
    visited[src] = true;

    if (temp.size() >= path.size())
    {
        if (temp.size() == path.size())
        {
            if (src > path.back())
            {
                path = temp;
                ep = src;
            }
        }
        else
        {
            path = temp;
            ep = src;
        }
    }
    for (auto &it : Graph[src])
    {
        if (visited[it] == false)
        {
            DFS(it, ep, path, temp, Graph, visited);
        }
    }
}
int solve(vector<vi> A)
{
    map<int, vi> Graph;
    for (auto &it : A)
    {
        Graph[it.front()].push_back(it.back());
        Graph[it.back()].push_back(it.front());
    }
    int n = Graph.size();
    int ep1, ep2;
    vi path, temp;
    vector<bool> visited(n + 1);
    DFS(1, ep1, path, temp, Graph, visited);
    path.clear();
    DFS(ep1, ep2, path, temp, Graph, visited);

    int ans = 0;

    for (int i = 1; i < path.size() - 1; i++)
    {
        for (auto &it : Graph[path[i]])
        {
            if (it != path[i - 1] and it != path[i + 1])
            {
                int t = Graph[it].size();
                ans += ((t - 1) * t);
            }
        }
    }
    return ans / 2;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int edges;
    cin >> edges;
    vector<vi> v;
    for (int i = 0; i < edges; i++)
    {
        vi temp(2);
        cin >> temp.front() >> temp.back();
        v.push_back(temp);
    }
    cout << solve(v);
}