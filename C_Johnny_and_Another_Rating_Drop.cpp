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

int ho2(int x)
{

    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    x |= x >> 63;

    return x ^ (x >> 1);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<int, int> ans;
    ans[1] = 1;
    for (int i = 1; i < 64; i++)
    {
        ans[(1ll << i)] = ans[(1ll << (i - 1))] * 2 + 1;
    }
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int ant = 0;
        while (n)
        {
            int x = ho2(n);
            ant += ans[x];
            n -= x;
        }
        cout << ant << endl;
    }
}