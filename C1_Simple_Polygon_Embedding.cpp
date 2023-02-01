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
    double pi = 3.1415926535897;
    while (tst--)
    {
        int n;
        cin >> n;
        double angle = pi / n;
        cout << fixed << setprecision(15) << 2 * sqrt(pow((sin(angle * (n - 1) / 2) / sin(angle)), 2) - 0.25) << endl;
    }
}