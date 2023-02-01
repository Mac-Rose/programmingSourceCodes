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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            s.emplace(it);
        }
        if (s.size() == 1)
        {
            cout << 1;
        }
        else if (s.size() == 2)
        {
            cout << (n - 2) / 2 + 2;
        }
        else
            cout << n;
        cout << Endl;
    }
}