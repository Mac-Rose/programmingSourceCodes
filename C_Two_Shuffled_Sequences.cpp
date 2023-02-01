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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    sort(all(v));
    vi a, b;
    a.pb(v[0]);
    for (int i = 1; i < n; i++)
    {
        if (i != 1 and v[i] == v[i - 1] and v[i - 1] == v[i - 2])
        {
            cout << "NO";
            exit(0);
        }
        if (v[i] == v[i - 1])
        {
            b.pb(v[i]);
        }
        else
            a.pb(v[i]);
    }
    cout << "YES\n";
    cout << a.size() << endl;
    for (int &it : a)
        cout << it << ' ';
    cout << endl;
    cout << b.size() << endl;
    reverse(all(b));
    for (int &it : b)
        cout << it << ' ';
}