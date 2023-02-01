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
        int ans = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                if (i == n - 2)
                {
                    ans++;
                    v[i + 1] = v[i];
                }
                else if (v[i + 2] < v[i])
                {
                    v[i + 1] = v[i];
                    ans++;
                }
                else
                {
                    ans++;
                    v[i + 1] = v[i + 2];
                }
            }
        }
        cout << ans << endl;
        for (int &it : v)
            cout << it << ' ';
        cout << endl;
    }
}