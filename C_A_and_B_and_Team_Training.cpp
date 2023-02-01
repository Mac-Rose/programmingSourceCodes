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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    if (b > a)
    {
        swap(b, a);
    }
    if (a >= 2 * b)
    {
        cout << b;
        exit(0);
    }
    else
    {
        ans = a % b;
        a -= 2 * ans;
        b -= ans;
        ans += (a + b) / 3;
        cout << ans;
    }
}