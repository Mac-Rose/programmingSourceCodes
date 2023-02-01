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
    int n;
    cin >> n;
    if (n % 7 == 6)
    {
        cout << ((n - 1) / 7) * 2 + 1;
    }
    else
        cout << (n / 7) * 2;
    cout << ' ';
    if (n < 3)
    {
        cout << n;
    }
    else
    {
        n -= 2;
        if (n % 7 == 6)
        {
            cout << ((n + 1) / 7) * 2 + 1;
        }
        else
            cout << (n / 7) * 2 + 2;
    }
}