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
        if (count(all(a), '0') == count(all(a), '1'))
            cout << a.size() / 2 - 1;
        else if (count(all(a), '0') < count(all(a), '1'))
            cout << count(all(a), '0');
        else
            cout << count(all(a), '1');
        cout << endl;
    }
}