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
    if (n & 1)
        cout << -1;
    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << (i + 1) * 2 << ' ' << i * 2 + 1 << ' ';
        }
    }
}