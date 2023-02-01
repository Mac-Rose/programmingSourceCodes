#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int c, o;
    c = o = 0;
    int sto = n + 1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '(')
        {
            o++;
            if (sto != n + 1 and o == c)
            {
                ans += i - sto + 1;
                sto = n + 1;
                o = c = 0;
            }
        }
        else
        {
            if (o > 0)
                o--;
            else
                sto = min(i, sto), c++;
        }
    }
    if (o == 0 and c == 0)
    {
        cout << ans;
    }
    else
        cout << -1;
}
