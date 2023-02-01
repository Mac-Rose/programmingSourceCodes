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
    int tst;
    cin >> tst;
    while (tst--)
    {
        vi v(3);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        if (accumulate(all(v), 0ll) & 1)
            cout << "NO";
        else if (v.back() == v.front() + v[1])
            cout << "YES";
        else if (v[1] == v.front())
            cout << "YES";
        else if (v[1] == v.back())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}