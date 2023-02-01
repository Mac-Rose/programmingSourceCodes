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
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

long countDivisiblePairs(vector<int> arr, int k, int x)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int l = arr[i];
        if (l % x != 0)
            l = x - (arr[i] % x) + arr[i];
        int r1 = l + x * (k - 1);
        int r2 = r1 + x;

        int range = (lower_bound(arr.begin(), arr.end(), r2) - arr.begin()) - 1 - (lower_bound(arr.begin(), arr.end(), r1) - arr.begin());
        if (range >= 0)
        {
            ans += range + 1;
        }
    }
    return ans;
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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        int k, x;
        cin >> k >> x;
        cout << countDivisiblePairs(v, k, x);
    }
}