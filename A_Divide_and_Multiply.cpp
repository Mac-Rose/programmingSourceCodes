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
        int count = 0;
        for (int &it : v)
        {
            cin >> it;
            while (it % 2 == 0)
            {
                count += 1;
                it /= 2;
            }
        }
        sort(all(v));
        v.back() *= (1ll << count);
        partial_sum(all(v), v.begin());
        cout << v.back() << endl;
    }
}