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
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        bool ans = true;
        if (binary_search(all(v), 1) == true)
            for (int i = n - 1; i > 0; i--)
            {
                if (v[i] == v[i - 1] + 1)
                {
                    ans = false;
                    break;
                }
            }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}