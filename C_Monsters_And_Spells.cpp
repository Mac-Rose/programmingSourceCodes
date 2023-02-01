#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
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

        vi k(n);
        vi h(n);
        for (int &it : k)
            cin >> it;
        for (int &it : h)
            cin >> it;
        vector<pii> ans;
        for (int i = 0; i < n; i++)
        {
            int l = k[i] - h[i] + 1, r = k[i];
            bool flag = true;
            for (int j = 0; j < ans.size(); j++)
            {
                if (l >= ans[j].F and r <= ans[j].S)
                {
                    ans[j].F = l;
                    ans[j].S = r;
                    flag = false;
                }
                else if (r <= ans[j].S and r >= ans[j].F and h[i] > r - ans[j].F + 1)
                    ans[j].F = l, flag = false;
                else if (l <= ans[j].S and l >= ans[j].F and r >= ans[j].S)
                    ans[j].S = r, flag = false;
            }
            if (flag)
                ans.pb({l, r});
        }
        sort(all(ans));
        ans.erase(unique(all(ans)), ans.end());
        int temp = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            int t = ans[i].S - ans[i].F + 1;
            temp += t * (t + 1) / 2;
        }
        cout << temp << endl;
    }
}