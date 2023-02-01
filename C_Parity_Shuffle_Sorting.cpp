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
#define Endl '\n'
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
        vi even;
        for (int &it : v)
        {
            cin >> it;
            if (!(it & 1))
                even.pb(&it - &v.front());
        }
        int ans = 0;
        vector<pii> temp;
        if (!(v.front() & 1))
        {
            for (int i = even.size() - 2; i > -1; i--)
            {
                ans++;
                temp.push_back({even[i], even.back()});
            }
            int k = 0;
            for (int i = 1; i < n; i++)
            {
                if (v[i] % 2 == 0)
                {
                    k = i;
                }
                else
                {
                    ans++;
                    temp.push_back({k, i});
                }
            }
        }
        else
        {
            if (v.back() % 2 == 0)
            {
                ans++;
                temp.push_back({0, n - 1});
                v.back() = v.front();
            }
            for (int j = n - 2; j > -1; j--)
            {
                if (v[j] & 1)
                {
                    ans++;
                    temp.push_back({j, n - 1});
                }
            }
            for (int i = 1; i < n; i++)
                if (v[i] % 2 == 0)
                {
                    ans++;
                    temp.push_back({i - 1, i});
                }
        }
        cout << ans << Endl;
        for (auto &it : temp)
            cout << it.first + 1 << ' ' << it.second + 1 << endl;
    }
}