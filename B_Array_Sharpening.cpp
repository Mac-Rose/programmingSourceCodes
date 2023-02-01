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
        for (int &it : v)
            cin >> it;
        bool flag = false;
        int val = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < i)
            {
                val = i;
                break;
            }
        }
        for (int i = 0; n - i - 1 >= val; i++)
        {
            if (v[n - i - 1] < i)
            {
                flag = true;
                break;
            }
        }
        if (val == n / 2 and (n & 1) == 0 and flag == false)
        {
            if (v[n / 2 - 1] < n / 2)
                flag = true;
        }
        (flag) ? cout << "No" : cout << "Yes";
        cout << endl;
    }
}