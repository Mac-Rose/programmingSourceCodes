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
    int n, k;
    cin >> n >> k;
    vi ans(n);
    iota(all(ans), 1);
    if (n == k)
    {
        cout << -1;
        exit(0);
    }
    else
    {
        k = n - k;
        if (k & 1)
        {
            int i = 1;
            while (k > 1)
            {
                k -= 2;
                swap(ans[i], ans[i + 1]);
                i += 2;
            }
        }
        else
        {
            int i = 0;
            while (k > 0)
            {
                k -= 2;
                swap(ans[i], ans[i + 1]);
                i += 2;
            }
        }
    }
    for (int &i : ans)
        cout << i << ' ';
}