#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n;
    cin >> k;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vi a(v.begin() + i, v.begin() + j + 1);
            sort(all(a));
            vi b(v.begin(), v.begin() + i);
            b.insert(b.end(), v.begin() + j + 1, v.end());
            sort(all(b), greater<int>());
            int k1 = k;
            for (int m = 0; m < min(a.size(), b.size()) and k1 > 0; m++)
            {
                if (b[m] <= a[m])
                    break;
                else
                {
                    swap(a[m], b[m]);
                    k1--;
                }
            }
            int temp = accumulate(all(a), 0);
            ans = max(temp, ans);
        }
    }
    cout << ans;
}