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
        int a[n];
        cin >> a[0];
        int mx = a[0];
        int mn = a[0];
        vector<pair<int, int>> p;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (mx > a[i])
            {
                mn = min(a[i], mn);
            }
            else
            {
                p.pb({mn, mx});
                mx = a[i];
                mn = a[i];
            }
        }
        p.pb({mn, mx});

        int prev = 0;
        ;
        int ik = 0;
        int c = 0;
        for (auto i : p)
        {
            if (!ik)
            {
                ik++;
                prev = i.second;
                c++;
            }
            else if (prev > i.first)
            {
                prev = max(prev, i.second);
            }
            else
            {
                c++;
                prev = max(prev, i.second);
            }
            //cout<<i.first<<" "<<i.second<<" ";
            // cout<<endl;
        }
        cout << c << endl;
    }
    return 0;
}