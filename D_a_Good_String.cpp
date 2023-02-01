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

inline ll cost(int k, string a)
{
    int co = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != 97 + k)
            co++;
    }
    return co;
}
inline ll helper(int k, string a, int n)
{
    if (n == 1)
    {
        if (a[0] == 98 + k)
            return 0;
        else
            return 1;
    }
    int x = cost(k + 1, a.substr(0, n / 2)) + helper(k + 1, a.substr(n / 2, n / 2), n / 2);
    int y = cost(k + 1, a.substr(n / 2, n / 2)) + helper(k + 1, a.substr(0, n / 2), n / 2);
    return min(x, y);
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
        string a;
        cin >> a;
        if (n == 1)
        {
            if (a == "a")
                cout << 0;
            else
                cout << 1;
            cout << endl;
            continue;
        }
        int k = 0;
        int x = cost(k, a.substr(0, n / 2)) + helper(k, a.substr(n / 2, n / 2), n / 2);
        int y = cost(k, a.substr(n / 2, n / 2)) + helper(k, a.substr(0, n / 2), n / 2);
        cout << min(x, y) << endl;
    }
}