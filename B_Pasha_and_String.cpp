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
    string a;
    cin >> a;
    int m;
    cin >> m;
    int n = a.size();
    vi ans(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int g;
        cin >> g;
        ans[g - 1]++;
        ans[n - g + 1]--;
    }
    for (int i = 1; i < n; i++)
    {
        ans[i] += ans[i - 1];
    }
    string st;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] & 1)
            st += a[n - i - 1];
        else
            st += a[i];
    }
    cout << st;
}