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
        vi a(n), b(n);
        for (int &it : a)
            cin >> it;
        for (int &it : b)
            cin >> it;
        multiset<int> store;
        int l = 0, r = 0;
        while (r < n)
        {
            if (b[l] != a[r])
            {
                if (r != 0 and b[l] == a[r - 1] and store.find(b[l]) != store.end())
                {
                    store.erase(store.find(a[r - 1]));
                    l++;
                }
                else
                {
                    store.emplace(a[r]);
                    r++;
                }
            }
            else
            {
                l++, r++;
            }
        }
        while (l < n and b[l] == a.back() and store.find(a.back()) != store.end())
        {
            store.erase(store.find(a.back()));
            l++;
        }
        if (l == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}