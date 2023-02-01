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
    vi ans(n - 1, 0);
    for (int i = 2, k = 1; i <= n; i++)
    {
        if (ans[i - 2] == 0)
        {
            for (int j = i; j <= n; j += i)
            {
                if (ans[j - 2] == 0)
                    ans[j - 2] = k;
            }
            k++;
        }
    }
    for (auto it : ans)
        cout << it << " ";
}