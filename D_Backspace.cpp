#include <bits/stdc++.h>
using namespace std;

string ans = "False";
map<int, vector<int>> Graph;
vector<bool> visited;

void bfs(int src, queue<int> &q)
{
    q.pop();
    if (visited[src] == true)
    {
        ans = "True";
        return;
    }
    visited[src] = true;
    for (auto &it : Graph[src])
    {
        if (visited[it] == false)
            q.push(it);
    }
    if (q.empty() == false)
        bfs(q.front(), q);
}
signed main()
{
    //check whether there exist a cycle or not
    // if cycle exist return true else return false
    int nodes, edges;
    cin >> nodes >> edges;
    visited.resize(nodes + 1);
    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;
        Graph[a].emplace_back(b);
        Graph[b].emplace_back(a);
    }
    for (int i = 1; i < nodes + 1; i++)
    {
        if (visited[i] == false)
        {
            queue<int> q;
            q.push(i);
            bfs(i, q);
        }
    }
    cout << ans;
}