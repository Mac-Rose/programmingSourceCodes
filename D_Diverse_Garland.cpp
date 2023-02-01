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
    int n;
    cin >> n;
    string a, A;
    cin >> a;
    A = a;
    int ans = 0;
    string str = "RGB";
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            int x = str.find(a[i + 2]);
            if (str[(x + 1) % 3] == a[i])
                a[i + 1] = str[(x + 2) % 3];
            else
                a[i + 1] = str[(x + 1) % 3];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != A[i])
            ans++;
    }
    cout << ans << '\n'
         << a;
}