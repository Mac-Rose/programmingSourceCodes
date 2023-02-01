#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

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
        vi s, t;
        vi fs(200), ft(200);
        fs[97]++, ft[97]++;
        s.push_back('a');
        t.pb('a');
        while (n--)
        {
            int d, x;
            string a;
            cin >> d >> x >> a;

            if (d == 1)
            {
                for (char &it : a)
                {
                    s.pb(it);
                    fs[it] += x;
                }
            }
            else
            {
                for (char &it : a)
                {
                    t.pb(it);
                    ft[it] += x;
                }
            }
            sort(all(s));
            sort(all(t));

            s.erase(unique(all(s)), s.end());
            t.erase(unique(all(t)), t.end());
            if (t.size() > 1)
            {
                cout << "YES";
            }
            else
            {
                if (s.size() > 1)
                    cout << "NO";
                else if (fs['a'] < ft['a'])
                    cout << "YES";
                else
                    cout << "NO";
            }
            cout << Endl;
        }
    }
}