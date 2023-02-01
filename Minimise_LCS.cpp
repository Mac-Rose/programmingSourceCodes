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
        vi v(n);
        for (int &it : v)
            cin >> it;
        int count1 = accumulate(all(v), 0ll);
        int count0 = n - count1;
        if (count1 <= count0)
        {
            cout << count1;
        }
        else if (count1 - count0 == 4)
        {
            cout << count0;
        }
        else
        {
            cout << count0 + (count1 - count0) / 3;
        }
        cout << Endl;
    }
}