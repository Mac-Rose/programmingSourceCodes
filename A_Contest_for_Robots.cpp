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
    vi r(n), b(n);
    int s = 0, cnt = 0;
    for (auto &it : r)
        cin >> it;
    for (auto &it : b)
    {
        cin >> it;
        if (it)
            s++;
    }
    for (int i = 0; i < n; i++)
        if (r[i] == 1 and b[i] == 0)
            cnt++;
        else if (r[i] == 1 and b[i] == 1)
            s--;
    if (cnt == 0)
    {
        cout << -1;
        exit(0);
    }
    cout << ceil((s + 1.0) / cnt);
}