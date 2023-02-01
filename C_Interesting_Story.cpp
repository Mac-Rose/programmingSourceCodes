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
        int ans = 0;
        cin >> n;
        vi va, vb, vc, vd, ve;
        int cnta = 0, cntb = 0, cntc = 0, cntd = 0, cnte = 0;
        string a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            int tempa = 0, tempb = 0, tempc = 0, tempd = 0, tempe = 0;
            int x = a.size();
            for (int i = 0; i < x; i++)
            {
                if (a[i] == 'a')
                    tempa++;
                else if (a[i] == 'b')
                    tempb++;
                else if (a[i] == 'c')
                    tempc++;
                else if (a[i] == 'd')
                    tempd++;
                else
                    tempe++;
            }
            va.pb(-x + 2 * tempa);
            vb.pb(-x + 2 * tempb);
            vc.pb(-x + 2 * tempc);
            vd.pb(-x + 2 * tempd);
            ve.pb(-x + 2 * tempe);
        }
        sort(all(va), greater<int>());
        sort(all(vb), greater<int>());
        sort(all(vc), greater<int>());
        sort(all(vd), greater<int>());
        sort(all(ve), greater<int>());
        int i = 0, temp = 0;
        for (i = 0, temp = 0; i < n; i++)
        {
            temp += va[i];
            if (temp <= 0)
                break;
        }
        ans = max(ans, i);
        for (i = 0, temp = 0; i < n; i++)
        {
            temp += vb[i];
            if (temp <= 0)
                break;
        }
        ans = max(ans, i);
        for (i = 0, temp = 0; i < n; i++)
        {
            temp += vc[i];
            if (temp <= 0)
                break;
        }
        ans = max(ans, i);
        for (i = 0, temp = 0; i < n; i++)
        {
            temp += vd[i];
            if (temp <= 0)
                break;
        }
        ans = max(ans, i);
        for (i = 0, temp = 0; i < n; i++)
        {
            temp += ve[i];
            if (temp <= 0)
                break;
        }
        ans = max(ans, i);
        cout << ans << endl;
    }
}