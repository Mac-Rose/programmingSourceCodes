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
        vi v(n), a;
        for (int &it : v)
        {
            cin >> it;
        }
        a = v;
        sort(all(v));
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != v[i])
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
}