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
        map<int, int> ma;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            ma[g] = i;
        }
        int min = n + 1, max = -1;
        vi ans(n);
        for (int i = 1; i <= n; i++)
        {
            if (ma[i] > max)
                max = ma[i];
            if (ma[i] < min)
                min = ma[i];
            if (max - min + 1 == i)
                ans[i - 1] = 1;
            else
                ans[i - 1] = 0;
        }
        for (auto &it : ans)
            cout << it;
        cout << endl;
    }
}