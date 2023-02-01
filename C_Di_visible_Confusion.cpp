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
        for (auto &it : v)
            cin >> it;
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            int g = v[i - 1];
            if (g % 2 == 0)
            {
                int k = 2;
                while (k < i + 2)
                {
                    if (g % k != 0)
                        break;
                    else
                        k++;
                }
                if (k == i + 2)
                {
                    flag = false;
                    break;
                }
            }
        }
        (flag) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}