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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, l;
        cin >> n >> l;
        int start = 0, last = n - 1;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        if (v[start] == v[last])
            cout << last - start;
        else
        {
                }
    }
}