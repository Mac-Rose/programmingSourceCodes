#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
    for (auto &it : v)
        cin >> it;
    if (n == 1)
    {
        cout << "1 1\n";
        cout << -v.back() << '\n';
        cout << "1 1\n";
        cout << 0 << '\n';
        cout << "1 1\n";
        cout << 0 << '\n';
        exit(0);
    }
    cout << 1 << ' ' << n - 1 << '\n';
    int a = n, b = n - 1, x, y;
    for (int i = 0; i < n - 1; i++)
    {
        int val = (v[i] % (n)) * (n - 1);
        v[i] += val;
        cout << val << ' ';
    }
    cout << '\n';
    cout << n << ' ' << n << '\n';
    cout << -v.back() << '\n';
    v.back() = 0;
    cout << 1 << ' ' << n << '\n';
    for (auto &it : v)
        cout << -it << ' ';
}