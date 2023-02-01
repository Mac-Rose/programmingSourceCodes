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

inline ll fun(int n)
{
    return n * (n + 1) / 2;
}
inline ll fun1(int n, int a, int k)
{
    return a * (a + 1) / 2 + k * n - n * (n + 1) / 2;
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
        int n, x;
        cin >> n >> x;
        int a = 0, b = 0;
        int l = 0, r = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (fun(mid) >= x)
            {
                r = mid - 1;
            }
            else
            {
                a = mid + 1;
                l = mid + 1;
            }
        }
        a = min(a, n);
        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (fun1(mid, a, n) >= x)
            {
                r = mid - 1;
            }
            else
            {
                b = mid + 1;
                l = mid + 1;
            }
        }
        b = min(b, n - 1);
        cout << a + b << endl;
    }
}