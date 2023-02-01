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
    for (auto &it : v)
        cin >> it;
    if (n == 1 and (v.back() != 0 and v.back() != 15))
        cout << -1;
    else if (v.back() == 0)
        cout << "UP";
    else if (v.back() == 15)
        cout << "DOWN";
    else
    {
        if (v.back() > v[n - 2])
            cout << "UP";
        else
            cout << "DOWN";
    }
}