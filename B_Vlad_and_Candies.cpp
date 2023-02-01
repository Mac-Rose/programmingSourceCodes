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
        if (n == 1)
        {
            if (v.front() == 1)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
            continue;
        }
        bool ans = true;
        sort(all(v), greater<int>());
        if (v.front() - v[1] > 1)
            ans = false;
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}