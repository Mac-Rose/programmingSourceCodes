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

int cal(vi &a, vi &b)
{
    int res = 0;
    for (int i = 1; i < a.size(); i++)
        res += abs(a[i] - a[i - 1]);
    for (int i = 1; i < b.size(); i++)
        res += abs(b[i] - b[i - 1]);
    return res;
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
        vi a(n), b(n);
        for (int &it : a)
            cin >> it;
        for (int &it : b)
            cin >> it;
        for (int i = 0; i < n; i++)
            if (a[i] > b[i])
                swap(a[i], b[i]);
        cout << cal(a, b) << endl;
    }
}