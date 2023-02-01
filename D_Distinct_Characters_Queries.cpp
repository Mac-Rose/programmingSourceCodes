// Problem: D. Maximum Product Strikes Back
// Contest: Codeforces - Codeforces Round #780 (Div. 3)
// URL: https://codeforces.com/contest/1660/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
typedef long long ll;
#define int ll
#define endl "\n"
#define pb push_back
#define lb lower_bound
#define ub upper_bound
using namespace std;
signed main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int testcases = 1;
    cin >> testcases;
    while (testcases--)
    {
        int n;
        cin >> n;
        int a[n + 2] = {0};
        vector<int> v;
        v.pb(0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                v.pb(i); //sare zeroes ki position store karli
        }
        v.pb(n + 1);
        int o = 1;
        int i = v[0];
        int j = v[1];
        vector<pair<int, pair<int, int>>> t;
        while (j <= n + 1)
        {
            int pro = 1;
            int fn = 0;
            int ln = 0;
            int fni = -1;
            int lni = -1;
            for (int k = i + 1; k < j; k++)
            {
                if (a[k] < 0 && fn == 0)
                {
                    fn = a[k];
                    ln = fn;
                    lni = fni = k;
                }
                else if (a[k] < 0)
                {
                    ln = a[k];
                    lni = k;
                }
                pro *= a[k];
            }
            if (pro > 0)
            {
                t.pb({pro, {i, n + 2 - j - 1}});
            }
            else
            {
                if (ln == fn)
                {
                    int p1 = 1, p2 = 1;
                    for (int k = i + 1; k < lni; k++)
                    {
                        p1 *= a[k];
                    }
                    for (int k = lni + 1; k < j; k++)
                    {
                        p2 *= a[k];
                    }
                    if (p1 > p2)
                    {
                        t.pb({p1, {i, n + 2 - lni - 1}});
                    }
                    else
                    {
                        t.pb({p2, {lni, n + 2 - j - 1}});
                    }
                }
                else
                {
                    int p1 = 1, p2 = 1;
                    int p3 = 1, p4 = 1;
                    for (int k = fni + 1; k < j; k++)
                    {
                        p1 *= a[k];
                    }
                    for (int k = i + 1; k < fni; k++)
                    {
                        p2 *= a[k];
                    }
                    for (int k = i + 1; k < lni; k++)
                    {
                        p3 *= a[k];
                    }
                    for (int k = lni + 1; k < j; k++)
                    {
                        p4 *= a[k];
                    }

                    t.pb({p1, {fni, n + 2 - j - 1}});
                    t.pb({p2, {i, n + 2 - fni - 1}});
                    t.pb({p3, {i, n + 2 - lni - 1}});
                    t.pb({p4, {lni, n + 2 - j - 1}});
                }
            }
            if (o < v.size())
                o++;
            else
                break;
            i = j;
            j = v[o];
            //o++;
        }
        sort(t.begin(), t.end());
        if (t[t.size() - 1].first == 1)
            cout << 0 << " " << n << endl;
        else
            cout << t[t.size() - 1].second.first << " " << t[t.size() - 1].second.second << endl;
    }
    return 0;
}

//////////////////////////////KharBooZi///////////////////////////////