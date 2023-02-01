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
        int n, k, K;
        cin >> n >> k;
        K = k;
        vi v(n), diff;
        for (auto &it : v)
        {
            cin >> it;
            if (it % k)
            {
                diff.pb(k - (it % k));
            }
        }
        if (diff.size() == 0)
        {
            cout << "0\n";
            continue;
        }
        sort(all(diff));
        vi diff1;
        diff1.pb(diff[0]);
        for (int i = 1; i < diff.size(); i++)
        {
            if (diff[i] == diff[i - 1])
            {
                diff1.pb(diff[i] + k);
                k += K;
            }
            else
            {
                k = K;
                diff1.pb(diff[i]);
            }
        }
        sort(all(diff1));
        cout << diff1.back() + 1 << endl;
    }
}