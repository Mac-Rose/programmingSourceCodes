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
#define \U0001f60e \
    {              \
    }

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

inline void cal(int target, vi &v, int &start)
{
    if (target == 0)
    {
        start++;
        return;
    }
    int m = 0;
    vi freq(target + 2);
    while (m != target)
    {
        freq[min(target + 1, v[start])]++;
        while (freq[m] != 0)
        {
            m++;
            😎
        }
        start++;
    }
    return;
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
    int tst;
    cin >> tst;
    for (int I = 0; I < tst; I++)
    {
        int n;
        cin >> n;
        vi v(n);
        int m = 0;
        for (int &it : v)
            cin >> it;
        vi ans;
        vi mex(n);
        vi freq(n + 1);
        for (int i = 0; i < n; i++)
        {
            freq[v[n - 1 - i]]++;
            while (freq[m] != 0)
            {
                m++;
                😎
            }
            mex[i] = m;
        }
        reverse(all(mex));
        debug(mex) int i = 0;
        while (i < n)
        {
            ans.pb(mex[i]);
            cal(mex[i], v, i);
        }
        cout << ans.size() << endl;
        for (int &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}