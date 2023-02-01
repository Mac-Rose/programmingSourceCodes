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
vector<bool> visited;
vector<vector<int>> graph;
bool BFS(int src, int dest)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    int k = q.size();
    while (!q.empty())
    {
        while (k--)
        {
            int top = q.front();
            q.pop();
            if (top == dest)
                return true;
            for (int &it : graph[top])
            {
                if (visited[it] == false)
                {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
        int k = q.size();
    }
    return false;
}
bool validPath(int n, vector<vector<int>> edges, int source, int destination)
{
    visited.resize(n);
    graph.resize(n);
    for (auto &it : edges)
        graph[it.front()].push_back(it.back()), graph[it.back()].push_back(it.front());
    return BFS(source, destination);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    validPath(6, {{0, 1}, {0, 2}, {3, 5}, {5, 4}, {4, 3}}, 0, 5);
}