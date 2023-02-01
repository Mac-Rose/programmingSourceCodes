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
    vi v;
    for (int i = 1; i * i < 1000000000; i++)
    {
        v.pb(i * i);
    }
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int row = lower_bound(all(v), n) - v.begin();
        if (v[row] == n)
        {
            cout << row + 1 << " 1\n";
            continue;
        }
        else
            row--;
        int g, h;
        if (n > v[row] + row + 1)
        {
            g = row + 1 - (n - (v[row] + row + 1)) + 2;
            h = row + 2;
        }
        else
        {
            g = sqrt(v[row]) + 1;
            h = n - v[row];
        }
        cout << h << " " << g;
        cout << endl;
    }
}