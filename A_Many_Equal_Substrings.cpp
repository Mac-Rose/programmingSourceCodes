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
    int n, k;
    cin >> n >> k;
    string t;
    cin >> t;
    int ans = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (t.substr(i, n - i) == t.substr(0, n - i))
        {
            ans = n - i;
        }
    }
    cout << t;
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = ans; j < n; j++)
            cout << t[j];
    }
}