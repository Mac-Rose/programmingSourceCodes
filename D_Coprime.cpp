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

bool comp(pii sec, pii fir)
{
    if (fir.first > sec.first)
        return true;
    else if (fir.first == sec.first)
    {
        if (fir.second < sec.second)
            return true;
        else
            return false;
    }
    else
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
        vector<pii> v(n);
        for (int i = 0; i < n; i++)
        {
            int ti;
            cin >> ti;
            v[i] = {ti, i};
        }
        sort(all(v), comp);

        int i = 0, j = 1;
        while (j < n)
        {
            if (v[j].first == v[i].first)
            {
                v[j].first = 50000;
            }
            else
                i = j;
            j++;
        }
        sort(all(v));
        int k = n;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first == 50000)
            {
                k = i;
                break;
            }
        }
        v.erase(v.begin() + k, v.end());
        int ans = -1;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i; j < v.size(); j++)
            {
                if (__gcd(v[i].first, v[j].first) == 1)
                {
                    ans = max(ans, v[i].second + v[j].second + 2);
                }
            }
        }
        cout << ans << endl;
    }
}