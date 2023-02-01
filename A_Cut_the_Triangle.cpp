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
        vi v(6);
        for (int &it : v)
            cin >> it;

        if (v[0] == v[2] and v[1] == v[5])
        {
            cout << "NO";
            cout << endl;
            continue;
        }

        if (v[1] == v[3] and v[0] == v[4])
        {
            cout << "NO" << endl;
            continue;
        }

        if (v[2] == v[4] and v[3] == v[1])
        {
            cout << "NO";
            cout << endl;
            continue;
        }

        if (v[3] == v[5] and v[2] == v[0])
        {
            cout << "NO" << endl;
            continue;
        }

        if (v[4] == v[0] and v[5] == v[3])
        {
            cout << "NO";
            cout << endl;
            continue;
        }

        if (v[5] == v[1] and v[4] == v[2])
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}