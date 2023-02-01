#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

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
        int temp = 1;
        vi ans;
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                if (temp == 1)
                {
                    flag = true;
                    break;
                }
                ans.pb(temp);
                temp = 1;
            }
            else
                temp++;
        }
        if (temp == 1)
        {
            flag = true;
        }
        ans.pb(temp);
        // sort(all(ans));

        if (flag)
            cout << -1;
        else
        {
            int k = 0;
            for (int i = 0; i < ans.size(); i++)
            {
                k += ans[i];
                cout << k << ' ';
                for (int j = k - ans[i] + 1; j < k; j++)
                    cout << j << ' ';
            }
        }
        cout << endl;
    }
}