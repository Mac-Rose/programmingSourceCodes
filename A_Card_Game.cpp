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
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        vi a(k1), b(k2);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        sort(all(a));
        sort(all(b));
        if (a.back() > b.back())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}