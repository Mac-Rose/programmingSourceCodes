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
        vi even, odd;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            if (i & 1)
                odd.pb(g);
            else
                even.pb(g);
        }
        int g = odd[0];
        for (int i = 1; i < odd.size(); i++)
        {
            g = __gcd(odd[i], g);
        }
        int h = even[0];
        for (int i = 1; i < even.size(); i++)
        {
            h = __gcd(h, even[i]);
        }
        if (h == 1 and g == 1)
            cout << 0;
        else
        {
            if (h == 1)
            {
                bool flag = false;
                for (int i = 0; i < even.size(); i++)
                {
                    if (even[i] % g == 0)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    cout << 0;
                else
                    cout << g;
            }
            else if (g == 1)
            {
                bool flag = false;
                for (int i = 0; i < odd.size(); i++)
                {
                    if (odd[i] % h == 0)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    cout << 0;
                else
                    cout << h;
            }
            else
            {
                bool flag = false;
                for (int i = 0; i < odd.size(); i++)
                {
                    if (odd[i] % h == 0)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    flag = false;
                    for (int i = 0; i < even.size(); i++)
                    {
                        if (even[i] % g == 0)
                        {
                            flag = true;
                            break;
                        }
                    }
                    if (flag)
                        cout << 0;
                    else
                        cout << g;
                }
                else
                    cout << h;
            }
        }
        cout << endl;
    }
}