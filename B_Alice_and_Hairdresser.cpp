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

struct DisjointSet
{
    vector<int> parent;
    vector<int> size;
    DisjointSet(int maxSize)
    {
        parent.resize(maxSize);
        size.resize(maxSize);
        for (int i = 0; i < maxSize; i++)
        {
            parent[i] = -1;
            size[i] = 1;
        }
    }
    int find_set(int v)
    {
        if (-1 == parent[v])
            return v;
        else if (parent[v] == v)
            return v;
        return parent[v] = find_set(parent[v]);
    }
    void union_set(int a, int b)
    {
        if (a == b and parent[a] == -1)
        {
            parent[b] = a, parent[a] = a, size[a] += size[b];
            return;
        }
        a = find_set(a);
        b = find_set(b);
        if (a != b)
        {
            if (size[a] < size[b])
                swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, l;
    cin >> n >> m >> l;
    DisjointSet s(n);
    vi v(n);
    for (int &it : v)
        cin >> it;
    for (int i = 1; i < n; i++)
    {
        if (v[i] > l and v[i - 1] > l)
        {
            s.union_set(i, i - 1);
        }
    }
    for (int i = n - 2; i > -1; i--)
    {
        if (v[i] > l and v[i + 1] > l)
        {
            s.union_set(i, i + 1);
        }
    }
    if (n != 1 and v[n - 1] > l and v[n - 2] <= l)
        s.union_set(n - 1, n - 1);
    if (n != 1 and v[0] > l and v[1] <= l)
        s.union_set(0, 0);
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] > l and v[i - 1] <= l and v[i + 1] <= l)
        {
            s.union_set(i, i);
        }
    }
    set<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (s.parent[i] != -1)
            temp.emplace(s.find_set(i));
    }
    int k = 0, ans = 0;
    for (int i = 0; i < m; i++)
    {
        int q;
        cin >> q;
        if (q)
        {
            int p, d;
            cin >> p >> d;
            v[p - 1] += d;
            if (v[p - 1] <= l)
                continue;
            if (v[p - 1] - d > l)
                ;
            else
            {
                if (p != 1 and p != n and v[p - 2] > l and v[p] > l)
                {
                    k++;
                    s.union_set(p - 1, p - 2);
                    s.union_set(p - 1, p);
                }
                else if (p != 1 and v[p - 2] > l)
                {
                    s.union_set(p - 1, p - 2);
                }
                else if (p != n and v[p] > l)
                {
                    s.union_set(p - 1, p);
                }
                else if (p == 1 or p == n)
                {
                    s.union_set(p - 1, p - 1);
                    ans++;
                }
                else if (v[p - 2] <= l and v[p] <= l)
                {
                    s.union_set(p - 1, p - 1);
                    ans++;
                }
            }
        }
        else
        {
            cout << ans + temp.size() - k << endl;
        }
    }
}