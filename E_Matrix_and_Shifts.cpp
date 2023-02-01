void dfs(int x, map<int, vi> &G)
{
    visited[x] = true;
    for (auto &i : G[x])
    {
        if (visited[i] == false)
        {
            dfs(i, G);
        }
    }
}

map<int, vi> G;
G[1].second.size()