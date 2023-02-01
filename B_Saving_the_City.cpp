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
        int a, b;
        cin >> a >> b;
        string v;
        cin >> v;

        int ans = 0, i;
        for (i = 0; i < v.size(); i++)
        {
            if (v[i] == '1')
            {
                ans += a;
                break;
            }
        }
        int temp = 0;
        for (; i < v.size(); i++)
        {
            if (v[i] == '0')
            {
                temp++;
            }
            else if (v[i] == '1' and v[i - 1] == '1')
                continue;
            else
            {
                if (temp * b < a)
                    ans += temp * b;
                else
                    ans += a;
                temp = 0;
            }
        }
        cout << ans << endl;
    }
}