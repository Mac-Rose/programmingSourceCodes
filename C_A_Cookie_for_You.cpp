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
        int a, b, n, m;
        cin >> a >> b >> n >> m;
        if (n + m > a + b)
            cout << "No";
        else
        {
            if (min(a, b) < m)
                cout << "No";
            else
                cout << "Yes";
        }
        cout << endl;
    }
}