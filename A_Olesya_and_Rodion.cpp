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
    int a, b;
    cin >> a >> b;
    if (a == 1 and b == 10)
        cout << -1;
    else if (b == 10)
    {
        cout << 1;
        for (int i = 0; i < a - 1; i++)
            cout << '0';
    }
    else
    {
        for (int i = 0; i < a; i++)
            cout << b;
    }
}