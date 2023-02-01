#include <bits/stdc++.h>
using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007

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
        sort(all(v), greater<int>());
        if (v.front() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int s = accumulate(v.begin() + 1, v.end(), 0ll);
        if (v.front() > s + 1)
        {
            cout << v.front() - s;
        }
        else
            cout << 1;
        cout << endl;
    }
}