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

        string a;
        cin >> a;
        vector<pii> v;
        vector<pii> d;
        vector<pii> k;
        for (int i = 1; i < a.size(); i++)
        {
            v.push_back({a[i] + a[i - 1] - 96, i});
            if (a[i] + a[i - 1] - 96 > 9)
            {
                k.push_back({a[i] + a[i - 1] - 96, i});
            }
        }
        d = v;
        sort(all(v), greater<>());
        int idx = v.front().S;
        if (v.front().F < 10)
        {
            idx = -1;
            for (int i = 0; i < d.size(); i++)
            {
                if (a[d[i].S - 1] - 48 <= d[i].F)
                {
                    idx = d[i].S;
                    break;
                }
            }
            if (idx == -1)
                idx = a.size() - 1;
        }
        else
        {
            idx = -1;
            for (int i = 0; i < k.size(); i++)
            {
                if ((a[k[i].S - 1] - 48) * 10 + (a[k[i].S] - 48) <= k[i].F)
                {
                    idx = k[i].S;
                    break;
                }
            }
            if (idx == -1)
                idx = k.back().S;
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (i != idx - 1)
            {
                cout << a[i];
            }
            else
            {
                cout << d[i].F;
                i++;
            }
        }
        cout << endl;
    }
}