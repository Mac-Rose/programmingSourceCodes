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
        int n;
        cin >> n;
        map<int, int> m;
        string a;
        cin >> a;
        for (int i = 0; i < n; i++)
        {
            m[a[i] - 48]++;
        }
        if (m[1] > 0)
        {
            cout << 1 << endl
                 << 1;
        }
        else if (m[4] > 0)
        {
            cout << 1 << endl
                 << 4;
        }
        else if (m[6] > 0)
        {
            cout << 1 << endl
                 << 6;
        }
        else if (m[8] > 0)
        {
            cout << 1 << endl
                 << 8;
        }
        else if (m[9] > 0)
        {
            cout << 1 << endl
                 << 9;
        }
        else
        {
            cout << 2 << endl;
            int flag = 1;
            for (auto it : m)
            {
                if (it.S > 1)
                {
                    cout << it.F << it.F;
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << a[0];
                if (a[0] - 48 == 2)
                {
                    if (a[1] - 48 == 3)
                        cout << a[2];
                    else
                        cout << a[1];
                }
                else if (a[0] - 48 == 3)
                {
                    if (a[1] - 48 == 7)
                        cout << a[2];
                    else
                        cout << a[1];
                }
                else if (a[0] - 48 == 5)
                {
                    if (a[1] - 48 == 3)
                        cout << a[2];
                    else
                        cout << a[1];
                }
                else
                {
                    if (a[1] - 48 == 3)
                        cout << a[2];
                    else
                        cout << a[1];
                }
            }
        }
        cout << endl;
    }
}