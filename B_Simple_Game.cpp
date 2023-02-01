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
    int n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << 1;
        exit(0);
    }
    if (m == (n - 1) / 2 + 1)
        if (n & 1)
            cout << m - 1;
        else
            cout << m + 1;
    else if (m > (n - 1) / 2 + 1)
    {
        cout << m - 1;
    }
    else
        cout << m + 1;
}