#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        fill(all(size), 1);
        iota(all(parent), 0);
    }

    int find_set(int v)
    {
        if (v == parent[v])
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_set(int a, int b)
    {
        parent[b] = a;
        size[a] += size[b];
        size[b] = size[a];
    }
};

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    vector<pii> a(n);
    for (auto &it : v)
    {
        cin >> it;
        int i = &it - &v[0];
        a[i] = {it, i};
    }
    vi ans(n, -1);
    sort(all(a), greater<>());
    multimap<int, pii> m; //First value of map will contain the value and second will contain the max size
    DisjointSet dsu(n);
    for (int i = 0; i < n; i++)
    {
        if (dsu.find_set(a[i].S) != a[i].S)
            ;
        else
        {
            for (int j = a[i].S + 1; j < n; j++)
            {
                if (v[j] < a[i].F)
                {
                    break;
                }
                else
                {
                    int k = dsu.size[dsu.find_set(j)];
                    dsu.union_set(a[i].S, dsu.find_set(j));
                    j += k;
                    j--;
                }
            }
            for (int j = a[i].S - 1; j > -1; j--)
            {
                if (v[j] < a[i].F)
                {
                    break;
                }
                else
                {
                    int k = dsu.size[dsu.find_set(j)];
                    dsu.union_set(a[i].S, dsu.find_set(j));
                    j -= k;
                    j++;
                }
            }
        }
        m.insert({a[i].F, {a[i].S, dsu.size[a[i].S]}});
    }

    for (auto it = m.rbegin(); it != m.rend(); it++)
    {
        for (int k = (it->S.S) - 1; k > -1; k--)
            if (ans[k] != -1)
                break;
            else
                ans[k] = it->F;
    }
    for (auto it : ans)
        cout << it << " ";
}