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
    sort(all(v));
    v.erase(unique(all(v)), v.end());
    if (v.size() > 3)
        cout << "NO";
    else if (v.size() < 3)
        cout << "YES";
    else
    {
        if (v.back() - v[1] == v[1] - v.front())
            cout << "YES";
        else
            cout << "NO";
    }
}