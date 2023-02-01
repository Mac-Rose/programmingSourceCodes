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
        cout << 1 << endl;
        for (int i = 1; i < n; i++)
        {
            cout << "1 ";
            for (int j = 1; j < i; j++)
                cout << "0 ";
            cout << "1 ";
            cout << endl;
        }
        // cout << endl;
    }
}