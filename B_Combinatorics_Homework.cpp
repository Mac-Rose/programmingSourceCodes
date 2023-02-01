#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

bool check(vi &v, int m)
{
    int ma = accumulate(all(v), 0) - 3;
    int mi = v.back() - v[1] - v.front() - 1;
    if (m >= mi and m <= ma)
        return true;
    else
        return false;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int a, b, c, m;
        cin >> a >> b >> c >> m;
        vi v{a, b, c};
        sort(all(v));
        if (check(v, m))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}