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
        vi v(n + 2);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            v[i + 1] = g;
        }
        pii prod = {0, 1};
        pii ans1 = {1, 0};
        int start = 1;
        bool temp = false;
        pii ans = {0, 1};
        for (int i = 1; i <= n + 1; i++)
        {
            if (v[i])
            {
                if (v[i] < 0 and temp == false)
                {
                    temp = true;
                    start = i + 1;
                }
                else
                {
                    if (temp == true)
                    {
                        if (v[i] < 0)
                        {
                            prod.second++;
                            prod.second %= 2;
                        }
                        if (abs(v[i]) == 2)
                            prod.first++;
                    }
                }
            }
            else
            {
                if (prod.S == ans.S and prod.F > ans.F)
                {
                    ans = prod;
                    ans1 = {start, i - 1};
                }
                temp = false;
                prod = {0, 1};
            }
        }
        start = n;
        for (int i = n; i > -1; i--)
        {
            if (v[i])
            {
                if (v[i] < 0 and temp == false)
                {
                    temp = true;
                    start = i - 1;
                }
                else
                {
                    if (temp == true)
                    {
                        if (v[i] < 0)
                        {
                            prod.second++;
                            prod.second %= 2;
                        }
                        if (abs(v[i]) == 2)
                            prod.first++;
                    }
                }
            }
            else
            {
                if (prod.S == ans.S and prod.F > ans.F)
                {
                    ans = prod;
                    ans1 = {i + 1, start};
                }
                start = i - 1;
                temp = false;
                prod = {0, 1};
            }
        }
        start = 1;
        for (int i = 1; i <= n + 1; i++)
        {
            if (v[i])
            {
                if (v[i] < 0)
                {
                    prod.second++;
                    prod.second %= 2;
                }
                if (abs(v[i]) == 2)
                    prod.first++;
            }
            else
            {
                if (prod.S == ans.S and prod.F > ans.F)
                {
                    ans = prod;
                    ans1 = {start, i - 1};
                }
                start = i + 1;
                prod = {0, 1};
            }
        }
        cout << ans1.first - 1 << ' ' << n - ans1.second << endl;
    }
}