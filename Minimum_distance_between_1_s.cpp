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
        string a;
        vi v;
        int prev = -1;
        cin >> a;
        if (a.front() == '1')
            prev = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == '1')
            {
                if (prev != -1)
                {
                    if ((i - prev) & 1)
                        v.pb(1);
                    else
                        v.pb(2);
                }
                prev = i;
            }
        }
        sort(all(v));
        cout << v.front() << endl;
    }
}