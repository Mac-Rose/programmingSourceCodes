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
        vi a(n), b(n);
        vector<pii> v(n);
        set<int> aset, bset;
        for (int i = -n; i < 1; i++)
            aset.emplace(i), bset.emplace(i);
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v[i] = {c, i};
            if (aset.find(-c) == aset.end())
            {
                if (bset.find(-c) == bset.end())
                    flag = false;
                b[i] = c;
                bset.erase(-c);
            }
            else
            {
                a[i] = c;
                aset.erase(-c);
            }
        }
        sort(all(v));
        if (flag == false)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            int k = -v[i].F;
            if (a[v[i].S] == v[i].F)
            {
                k = *bset.lower_bound(k);
                if (k == 0)
                {
                    flag = false;
                    break;
                }
                bset.erase(k);
                b[v[i].S] = -k;
            }
            else
            {
                k = *aset.lower_bound(k);
                if (k == 0)
                {
                    flag = false;
                    break;
                }
                aset.erase(k);
                a[v[i].S] = -k;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int &it : a)
            cout << it << ' ';
        cout << endl;
        for (int &it : b)
            cout << it << ' ';
        cout << endl;
    }
}