#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

int maxSum(vi arr, int n, int k)
{
    int res = 0;
    for (int i = 0; i < k; i++)
        res += arr[i];
    int curr_sum = res;
    for (int i = k; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - k];
        res = max(res, curr_sum);
    }

    return res;
}
inline int suma(int a)
{
    return a * (a + 1) / 2;
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
        int n, k;
        cin >> n >> k;
        vi v(n);
        int ans = 0, sum = 0;
        for (int &it : v)
        {
            cin >> it;
            sum += it;
        }
        if (n >= k)
        {
            ans += maxSum(v, n, k);
            ans += (k) * (k - 1) / 2;
        }
        else
        {
            ans += sum;
            ans += suma(k - 1) - suma(k - n - 1);
        }
        cout << ans << endl;
    }
}