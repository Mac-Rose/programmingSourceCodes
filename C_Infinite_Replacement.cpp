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
        string a;
        cin >> a;
        string b;
        cin >> b;
        int cnt = count(all(a), 'a');
        if (b == "a")
        {
            cout << 1;
        }
        else if (b.find('a') != -1)
        {
            cout << -1;
        }
        else
        {
            cout << (1ll << cnt);
        }
        cout << endl;
    }
}