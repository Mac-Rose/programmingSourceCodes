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

bool lo(vi a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] > a[i - 1])
            return true;
    }
    return false;
}
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
        if (n & 1)
        {
            bool flag = false;
            for (int i = 1; i < n; i++)
            {
                if (v[i] <= v[i - 1])
                {
                    flag = true;
                    break;
                }
            }
            (flag) ? cout << "YES" : cout << "NO";
        }
        else
            cout << "YES";
        cout << endl;
    }
}