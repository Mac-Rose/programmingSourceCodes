#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007
struct DisjointSet
{
    vector<vector<pii>> parent;
    vector<vi> size;

    DisjointSet(int n, int m)
    {
        parent.resize(n, vector<pii>(m));
        size.resize(n, vi(m, 1));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                parent[i][j] = {i, j};
    }

    pii find_set(pii v)
    {
        if (v == parent[v.F][v.S])
            return v;
        return parent[v.F][v.S] = find_set(parent[v.F][v.S]);
    }

    void union_set(pii a, pii b)
    {
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (size[a.F][a.S] < size[b.F][b.S])
                swap(a, b);
            parent[b.F][b.S] = a;
            size[a.F][a.S] += size[b.F][b.S];
        }
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    DisjointSet s(n, m);

    vector<vector<char>> matrix(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m));

    vector<vi> ans(n, vi(m));

    for (auto &it : matrix)
        for (char &i : it)
            cin >> i;

    stack<pii> st;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == '.' and visited[i][j] == false)
            {
                st.push({i, j});
                while (st.empty() == false)
                {
                    int a = st.top().F;
                    int b = st.top().S;
                    visited[a][b] = true;
                    st.pop();
                    if (a != 0 and matrix[a - 1][b] == '.' and visited[a - 1][b] == false)
                    {
                        s.union_set({i, j}, {a - 1, b});
                        st.push({a - 1, b});
                    }

                    if (a != n - 1 and matrix[a + 1][b] == '.' and visited[a + 1][b] == false)
                    {
                        s.union_set({i, j}, {a + 1, b});
                        st.push({a + 1, b});
                    }

                    if (b != 0 and matrix[a][b - 1] == '.' and visited[a][b - 1] == false)
                    {
                        s.union_set({i, j}, {a, b - 1});
                        st.push({a, b - 1});
                    }

                    if (b != m - 1 and matrix[a][b + 1] == '.' and visited[a][b + 1] == false)
                    {
                        s.union_set({i, j}, {a, b + 1});
                        st.push({a, b + 1});
                    }
                }
            }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == '*')
            {
                set<pii> temp;
                if (i != 0 and matrix[i - 1][j] == '.')
                    temp.insert(s.find_set({i - 1, j}));

                if (i != n - 1 and matrix[i + 1][j] == '.')
                    temp.insert(s.find_set({i + 1, j}));

                if (j != 0 and matrix[i][j - 1] == '.')
                    temp.insert(s.find_set({i, j - 1}));

                if (j != m - 1 and matrix[i][j + 1] == '.')
                    temp.insert(s.find_set({i, j + 1}));

                ans[i][j] = 1;
                for (auto &it : temp)
                    ans[i][j] = ans[i][j] + s.size[it.F][it.S];
                ans[i][j] = ans[i][j] % 10;
            }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == '*')
                cout << ans[i][j];
            else
                cout << '.';
        cout << endl;
    }
}