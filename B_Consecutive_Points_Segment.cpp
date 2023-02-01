#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

bool check(int start, vi &v)
{
    vi r = v;
    int n = v.size();
    if (start == -1)
        r.front()--;
    else if (start == 1)
        r.front()++;
    for (int i = 1; i < n; i++)
    {
        if (r[i] - r[i - 1] > 2 or r[i] - r[i - 1] < 0)
            return false;
        else
            r[i] = r[i - 1] + 1;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        bool flag = check(-1, v) or check(0, v) or check(1, v);
        (flag) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}