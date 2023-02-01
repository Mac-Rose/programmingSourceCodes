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
        string a, b;
        cin >> a >> b;
        if (b == "abc")
        {
            if (count(all(a), 'a') and count(all(a), 'b') and count(all(a), 'c'))
            {
                sort(all(a));
                string temp;
                int x = count(all(a), 'c');
                for (int i = 0; i < a.size(); i++)
                {
                    if (a[i] != 'a')
                        break;
                    temp += a[i];
                }
                for (int i = 0; i < x; i++)
                {
                    temp += 'c';
                }
                for (int i = 0; i < a.size(); i++)
                {
                    if (a[i] == 'a' or a[i] == 'c')
                        ;
                    else
                        temp += a[i];
                }

                a = temp;
            }
            else
                sort(all(a));
        }
        else
            sort(all(a));
        cout << a << endl;
    }
}