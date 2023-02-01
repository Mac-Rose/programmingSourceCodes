#include <bits/stdc++.h>
using namespace std;

bool finder(list<pair<int, int>> adj[], int src, int des)
{
    if (src == des)
        return true;
    for (auto it = adj[src].begin(); it != adj[src].end(); it++)
    {
        if (finder(adj, it->first, des) == true)
            return true;
    }
    return false;
}

void addEdge(list<pair<int, int>> adj[], int u, int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
}
// Driver code
int main()
{
    int V;
    cin >> V;
    list<pair<int, int>> adj[V];
    int g;
    cin >> g;
    while (g--)
    {
        int s, d, wt;
        cin >> s >> d >> wt;
        addEdge(adj, s, d, wt);
    }
    int l, r;
    cin >> l >> r;
    cout << boolalpha << finder(adj, l, r);
    return 0;
}
