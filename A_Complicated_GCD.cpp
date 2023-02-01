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

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

string add(string a, int k)
{
    for (int i = a.size() - 1; i > -1; i--)
    {
        if (a[i] - 48 + k % 10 < 10)
        {
            a[i] += k % 10;
            k /= 10;
        }
        else
        {
            k /= 10;
            k++;
            a[i] = ((a[i] + k % 10) - 48) % 10 + 48;
        }
    }
    if (k != 0)
    {
        string b = to_string(k);
        a.insert(0, b);
    }
    return a;
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
        string a, A;
        cin >> a;
        A = a;
        int t = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] - 48)
            {
                t /= __gcd(t, ll(a[i] - 48));
                t *= (a[i] - 48);
            }
        }
        int u = t;
        int n = 0; //Size of t
        while (u)
            n++, u /= 10;

        int temp = 0;
        while (true)
        {
            string b = a.substr(0, min(n + 1, a.size()));
            a.erase(0, min(n + 1, a.size()));
            temp = stoi(b) % t;
            b = to_string(temp);
            if (a == "")
                break;
            a.insert(0, b);
        }
        if (temp != 0)
            temp = t - temp,
            cout << add(A, temp);
        else
            cout << A;
    }
}