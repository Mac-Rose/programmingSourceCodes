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

unsigned int nextPowerOf2(unsigned int n)
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n |= n >> 32;
    n++;
    return n;
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
        int ans = b - a;
        for (int i = a; i <= b; i++)
        {
            ans = min((i | b) - b + i - a + 1, ans);
        }
        int k = nextPowerOf2(b);
        for (int i = b; i <= k; i++)
        {
            ans = min(ans, (a | i) - b + 1);
        }
        cout << ans << endl;
    }
}