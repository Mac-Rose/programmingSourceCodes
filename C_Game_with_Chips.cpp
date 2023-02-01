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
    int n, m, k;
    cin >> n >> m >> k;
    cout << n + m + n * m - 3 << endl;
    for (int i = 0; i < n - 1; i++)
        cout << 'U';
    for (int i = 0; i < m - 1; i++)
        cout << 'L';
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            for (int j = 0; j < m - 1; j++)
                cout << 'L';
        else
            for (int j = 0; j < m - 1; j++)
                cout << 'R';
        if (i != n - 1)
            cout << 'D';
    }
}