#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
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
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a;
        cin >> a;
        int ca, cb, cc;
        ca = count(all(a), 'A');
        cb = count(all(a), 'B');
        cc = count(all(a), 'C');
        if (ca + cc == cb)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}