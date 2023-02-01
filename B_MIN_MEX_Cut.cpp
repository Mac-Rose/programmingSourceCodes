#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        int ans = 0;
        int flag = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '0' and flag == 0)
            {
                flag = 1;
                ans++;
            }
            else if (a[i] == '1')
                flag = 0;
        }
        if (ans > 2)
            cout << 2 << endl;
        else
            cout << ans << endl;
    }
}