#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
        n *= 2;
        vector<pii> v(n);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            v[i] = {g, i + 1};
        }
        int l = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i].F & 1)
                swap(v[i], v[l]), l++;
        }
        int flag = 1;
        int k = 0;
        for (int i = 0; k < n / 2 - 1; i += 2)
        {
            if (v[i + 1].F & 1)
            {
                cout << v[i].S << ' ' << v[i + 1].S << endl;
            }
            else if (flag == 1)
            {
                flag = 0;
                k--;
            }
            else if (flag == 0)
                cout << v[i].S << ' ' << v[i + 1].S << endl;
            k++;
        }
    }
}