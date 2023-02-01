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
        string a;
        cin >> a;
        int ans = INT64_MAX;
        int start = a.find('a');
        int v = count(all(a), 'a');
        if (v < 2)
        {
            cout << "-1\n";
            continue;
        }
        int ca, cb, cc;
        ca = cb = cc = 0;
        ca++;
        if (a.find("abbacca") != -1 or a.find("accabba") != -1)
            ans = min(ans, 7ll);
        for (int i = start + 1; i < n; i++)
        {
            if (a[i] == 'a')
            {
                ca++;
                if (ca > cb and ca > cc)
                {
                    ans = min(ans, i - start + 1);
                }
                start = i;
                ca = cb = cc = 0;
                ca++;
            }
            else if (a[i] == 'b')
                cb++;
            else
                cc++;
        }
        if (ans == INT64_MAX)
            ans = -1;
        cout << ans << endl;
    }
}