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
    int n;
    cin >> n;
    if (n > 44)
    {
        cout << "YES";
        exit(0);
    }
    vi v(n);
    for (auto &it : v)
        cin >> it;
    sort(all(v), greater<int>());
    for (int i = 0; i <= n - 3; i++)
    {
        if (v[i] < v[i + 1] + v[i + 2])
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}