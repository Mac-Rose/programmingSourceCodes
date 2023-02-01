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
        int hand;
        cin >> hand;
        vi v(3);
        for (int &it : v)
            cin >> it;
        if (v[hand - 1] == 0)
        {
            cout << "NO\n";
            continue;
        }
        hand = v[hand - 1];
        if (v[hand - 1] == 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES";
        cout << endl;
    }
}