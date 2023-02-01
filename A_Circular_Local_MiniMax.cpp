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
        if (n & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        sort(all(v));
        vi ans(n);
        for (int i = 0; i < n / 2; i++)
        {
            ans[2 * i] = v[i];
            ans[2 * i + 1] = v[i + n / 2];
        }
        bool temp = true;
        for (int i = 0; i < n; i += 2)
        {
            if (ans[i] < ans[(i - 1 + n) % n] and ans[i] < ans[i + 1])
                ;
            else
                temp = false;
        }
        for (int i = 1; i < n; i += 2)
        {
            if (ans[i] > ans[i - 1] and ans[i] > ans[(i + 1 + n) % n])
                ;
            else
                temp = false;
        }
        if (temp)
        {
            cout << "YES" << endl;
            for (int &it : ans)
                cout << it << ' ';
            cout << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
}