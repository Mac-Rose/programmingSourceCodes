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

inline bool euclid(int a, int b, int x)
{
    if (a < b)
        swap(a, b);
    if (x > a)
        return false;
    else if (a == x or b == x)
        return true;
    else if (a == 0 or b == 0)
        return false;
    else if ((a - x) % b == 0)
        return true;
    else
        return euclid(b, a % b, x);
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int a, b, x;
        cin >> a >> b >> x;
        if (euclid(a, b, x))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}