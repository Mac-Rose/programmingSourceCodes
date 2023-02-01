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

void check(ll &n)
{
    while (n % 2 == 0)
        n = n / 2;
    while (n % 3 == 0)
        n /= 3;
}

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
    for (int i = 0; i < n; i++)
    {
        check(v[i]);
    }
    set<ll> s(all(v));

    if (s.size() == 1)
        cout << "Yes";
    else
        cout << "No";
}