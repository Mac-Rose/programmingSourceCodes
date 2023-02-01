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
        int start = 0;
        pii en = {0, 0};
        int ans = 0;
        int teven = 0, todd = 0;
        for (int i = 0; i + 1 < n; i += 2)
        {
            teven += v[i];
            todd += v[i + 1];
            if (todd - teven < v[i + 1] - v[i])
            {
                teven = v[i], todd = v[i + 1];
                if (v[i + 1] - v[i] > ans)
                {
                    ans = v[i + 1] - v[i];
                    en = {i, i + 1};
                }
                start = i;
            }
            else if (todd - teven > ans)
            {
                en = {start, i + 1};
                ans = todd - teven;
            }
        }
        teven = 0, todd = 0, start = 1;
        for (int i = 1; i + 1 < n; i += 2)
        {
            todd += v[i];
            teven += v[i + 1];
            if (todd - teven < v[i] - v[i + 1])
            {
                teven = v[i + 1], todd = v[i];
                if (ans < v[i] - v[i + 1])
                {
                    ans = v[i] - v[i + 1];
                    en = {i, i + 1};
                }
                start = i;
            }
            else if (todd - teven > ans)
            {
                en = {start, i + 1};
                ans = todd - teven;
            }
        }
        vi yes_i_did_it(n);
        int i;
        for (i = 0; i < en.F; i++)
        {
            yes_i_did_it[i] = v[i];
        }
        for (int k = 0; en.F != en.S and k < en.S - en.F + 1; k++, i++)
        {
            yes_i_did_it[i] = v[en.S - k];
        }
        for (; i < n; i++)
        {
            yes_i_did_it[i] = v[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i += 2)
            sum += yes_i_did_it[i];
        cout << sum << endl;
    }
}