#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int y, k, n;
    cin >> y >> k >> n;
    int first_multiple;
    if (y % k)
        first_multiple = y + k - (y % k);
    else
        first_multiple = y + k;
    if (first_multiple > n)
        cout << -1;
    else
    {
        int last_multiple = k * (n / k);
        for (; first_multiple <= last_multiple; first_multiple += k)
        {
            cout << first_multiple - y << ' ';
        }
    }
}