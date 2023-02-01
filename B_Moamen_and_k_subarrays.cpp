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
        int n, k;
        cin >> n >> k;
        vi v(n), a, c(n, 0);
        for (auto &it : v)
            cin >> it;
        a = v;
        sort(all(a));
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
                ans++;
        }
        for (int i = 0; i < n; i++)
        {
            int index = lower_bound(all(a), v[i]) - a.begin();
            if (index == 0 and c[1] == 1)
                ans++;
            else if (index == n - 1 and c[n - 2] == 1)
                ans++;
            else if (index != 0 and index != n - 1)
            {
                if (c[index + 1] == 1 and c[index - 1] == 1)
                    ans++;
            }
            c[index] = 1;
            flag = 1;
        }
        if (ans <= k)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}