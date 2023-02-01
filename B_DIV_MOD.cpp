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
#define MOD 1000000007

int fun(int l, int r, int x, int a)
{
    if (x >= l and x <= r)
        return x / a + x % a;
    else
        return fun(l, r, l, a);
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
        int l, r, a;
        cin >> l >> r >> a;
        int larMul = r - r % a;
        if (larMul < l)
        {
            cout << fun(l, r, r, a);
        }
        else
        {
            cout << max({fun(l, r, larMul - 1, a), fun(l, r, larMul, a), fun(l, r, r, a)});
        }
        cout << endl;
    }
}