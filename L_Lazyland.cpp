#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define Endl "\n"
#define S second
#define all(c) (c).begin(), (c).end()

#ifndef ONLINE_JUDGE
#define debug(x)         \
    cerr << #x << " : "; \
    _print(x);           \
    cerr << endl;
#else
#define debug(x)
#pragma GCC optimize("Ofast")
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T>
using multi_oset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << " { ";
    _print(p.F);
    cerr << ",";
    _print(p.S);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << " [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(oset<T> v)
{
    cerr << " [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multi_oset<T> v)
{
    cerr << " [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << " [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << " [ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << " [ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

#define int long long

/*******************************************
    *███─███──███──████───████───███──████─████*
    *█──█──█─█───█─█──█───█───█─█───█─█────█   *
    *█──█──█─█████─█──────████──█───█─████─████*
    *█──█──█─█───█─█──█───█───█─█───█────█─█   *
    *█──█──█─█───█─████─█─█───█──███──████─████*
    *******************************************/

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    srand(time(NULL)); //for stress-testing
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vi vn(n), vm(m);
    vi prefixn(n), prefixm(m);
    for (auto &it : vn)
        cin >> it;
    for (auto &it : vm)
        cin >> it;
    for (int i = 1; i < n + 1; i++)
    {
        int sum = accumulate(vn.begin(), vn.begin() + i, (ll)0);
        prefixn[i - 1] = sum;
        for (int j = i, k = 0; j < n; j++, k++)
        {
            sum += vn[j];
            sum -= vn[k];
            if (sum < prefixn[i - 1])
                prefixn[i - 1] = sum;
        }
    }
    for (int i = 1; i < m + 1; i++)
    {
        int sum = accumulate(vm.begin(), vm.begin() + i, (ll)0);
        prefixm[i - 1] = sum;
        for (int j = i, k = 0; j < m; j++, k++)
        {
            sum += vm[j];
            sum -= vm[k];
            if (sum < prefixm[i - 1])
                prefixm[i - 1] = sum;
        }
    }
    int req;
    cin >> req;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int index = lower_bound(all(prefixm), req / prefixn[i]) - prefixm.begin();
        if (index == m)
        {
            int x = (i + 1) * index;
            if (x > ans)
                ans = x;
        }
        else if (prefixm[index] * prefixn[i] > req)
        {
            int x = (i + 1) * index;
            if (x > ans)
                ans = x;
        }
        else
        {
            int x = (i + 1) * (index + 1);
            if (x > ans)
                ans = x;
        }
    }
    cout << ans;
}