#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
// #define int long long
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
        int n, k;
        cin >> n >> k;
        vi v(n);
        vi s;
        for (auto &it : v)
        {
            cin >> it;
            s.pb(it);
        }
        sort(all(s));
        s.erase(unique(all(s)), s.end());
        if (s.size() > k)
            cout << "-1\n";
        else
        {
            while (s.size() < k)
            {
                s.pb(s.back());
            }
            cout << n * k << endl;
            for (int i = 0; i < n; i++)
                for (auto &it : s)
                    cout << it << ' ';
            cout << '\n';
        }
    }
}