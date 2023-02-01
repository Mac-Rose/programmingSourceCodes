//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find a Mother Vertex in the Graph.
    stack<int> st;
    vector<bool> visited;

    void DFS(int src, vector<int> adj[])
    {
        visited[src] = true;
        for (int &it : adj[src])
            if (visited[it] == false)
            {
                DFS(it, adj);
                st.push(it);
            }
    }
    int findMotherVertex(int V, vector<int> adj[])
    {
        visited.resize(V);
        for (int i = 0; i < V; i++)
        {
            if (visited[i] == false)
            {
                DFS(i, adj);
                st.push(i);
            }
        }
        int ans = st.top();
        while (st.empty() == false)
        {
            st.pop();
        }
        visited.clear();

        DFS(ans, adj);
        st.push(ans);
        if (st.size() != V)
            ans = -1;

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        Solution obj;
        int ans = obj.findMotherVertex(V, adj);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends