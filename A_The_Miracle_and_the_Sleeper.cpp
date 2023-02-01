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
        int l, r;
        cin >> r >> l;
        if (l / 2 >= r)
            if (l & 1)
                cout << l % (l / 2 + 1);
            else
                cout << (l - 1) % l / 2;
        else
            cout << l % r;
        cout << endl;
    }
}