#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;
#define pb push_back
#define mp make_pair
#define F first
#define Endl "\n"
#define S second
#define all(c) (c).begin(), (c).end()
#define int long long
/*******************************************
*███─███──███──████───████───███──████─████*
*█──█──█─█───█─█──█───█───█─█───█─█────█ *
*█──█──█─█████─█──────████──█───█─████─████*
*█──█──█─█───█─█──█───█───█─█───█────█─█ *
*█──█──█─█───█─████─█─█───█──███──████─████*
*******************************************/
int wsf = 0; //weight so far
int heavy = INT_MIN, light = INT_MAX;
vi lngpath, srtpath, kthpath;

priority_queue<int> kth;
void dfs(int a, int b, map<int, vector<pii>> &graph, vi &ans, vector<bool> &visited, int k)
{
    visited[a - 1] = true;
    if (a == b)
    {
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
        if (wsf > heavy)
        {
            heavy = wsf;
            lngpath = ans;
        }
        if (wsf < light)
        {
            light = wsf;
            srtpath = ans;
        }
        if (kth.size() < k)
        {
            kth.emplace(-wsf);
            if (-wsf >= kth.top())
            {
                kthpath = ans;
            }
        }
        else
        {
            if (wsf > -kth.top())
            {
                kth.pop();
                kth.emplace(wsf);
                kthpath = ans;
            }
        }
        return;
    }
    else
    {
        for (auto it : graph[a])
        {
            if (visited[it.F - 1] == false)
            {
                ans.pb(it.F);
                wsf += it.S;
                dfs(it.F, b, graph, ans, visited, k);
                ans.pop_back();

                wsf -= it.S;
                visited[it.F - 1] = false;
            }
        }
    }
}
void addEdge(int a, int b, int wt, map<int, vector<pii>> &graph)
{
    graph[a].pb({b, wt});
    graph[b].pb({a, wt});
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    srand(time(NULL)); //for stress-testing
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int nodes;
    cin >> nodes;
    map<int, vector<pii>> graph; //In case of weighted graph we have to make vector of pair
    int edges;
    cin >> edges;
    for (int i = 0; i < edges; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        addEdge(a, b, wt, graph);
    }
    int source, destination;
    cin >> source >> destination;
    vi ans;
    ans.pb(source);
    vector<bool> visited(nodes, false);
    int k;
    cin >> k;
    dfs(source, destination, graph, ans, visited, k);
    cout << "The longest path is: " << heavy << Endl;
    for (auto it : lngpath)
        cout << it << " ";
    cout << Endl;
    cout << "The shortest path is: " << light << Endl;
    for (auto it : srtpath)
        cout << it << " ";
    cout << Endl;
    cout << "The kth largest path is: " << -kth.top() << Endl;
    for (auto it : kthpath)
        cout << it << " ";
}
