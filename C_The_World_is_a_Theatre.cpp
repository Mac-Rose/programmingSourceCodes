#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first

#define S second
#define all(c) (c).begin(),(c).end()

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" : "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << " { "; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << " [ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << " [ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define int long long

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/


signed main()
{

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    srand(time(NULL));  //for stress-testing
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            a[i] = c - 48;
        }
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            b[i] = c - 48;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
            {
                if (i != 0 and a[i - 1] == 1) {ans++; a[i - 1]++;}
                else if (a[i] == 0) ans++;
                else if (i != n - 1 and a[i + 1] == 1) {ans++; a[i + 1]++;}
            }
        }
        cout << ans << endl;
    }
}