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
        for (int &it : v)
            cin >> it;
        int req = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] != i + 1)
            {
                req = i + 1;
                break;
            }
        }
        if (req == 0)
        {
            for (int &it : v)
                cout << it << ' ';
            cout << endl;
            continue;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == req)
            {
                ans = i;
                break;
            }
        }
        for (int i = 0; i < req - 1; i++)
        {
            cout << v[i] << ' ';
        }
        for (int i = ans; i >= req - 1; i--)
        {
            cout << v[i] << ' ';
        }
        for (int i = ans + 1; i < n; i++)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}