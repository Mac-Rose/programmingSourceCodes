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

int eucl(int a, int b, int &ans)
{
    if (b)
        ans += a / b;
    if (b == 0)
        return a;
    else
        return eucl(b, a % b, ans);
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
        int a, b;
        cin >> a >> b;
        if (b > a)
            swap(a, b);
        int ans = 0;
        eucl(a, b, ans);
        cout << ans << '\n';
    }
}