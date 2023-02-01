#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
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
        string a1, b1;
        cin >> a1 >> b1;
        list<char> a(all(a1));
        list<char> b(all(b1));
        int ans = 0;
        vi v;
        auto it = a.begin();
        advance(it, n - 1);
        auto ti = b.begin();
        advance(ti, n - 1);
        for (int i = 0; i < n; i++, it--, ti--)
        {
            if (*it != *ti)
            {
                if (i == n - 1)
                {
                    ans++;
                    v.pb(1);
                    break;
                }
                else if (a.front() != *it)
                {
                    ans++;
                    v.pb(1);
                    if (a.front() == '0')
                        a.front() = '1';
                    else
                        a.front() = '0';
                }
                ans += 2;
                v.pb(n - i);
                v.pb(n - i - 1);
                a.emplace(it, a.front());
                a.pop_front();
            }
        }
        vi v1;
        for (int i = 0; i < v.size(); i++)
        {
            if (i != v.size() - 1 and v[i] == v[i + 1])
            {
                i++;
            }
            else
                v1.pb(v[i]);
        }
        cout << v1.size() << " ";
        for (auto it : v1)
            cout << it << " ";
        cout << endl;
    }
}