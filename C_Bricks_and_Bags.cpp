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

long long makeIntegerBeautiful(long long n, int target)
{
    // int sum = 0;
    long long N = n;
    // int sz = 0;
    // while (k)
    // {
    //     sum += k % 10;
    //     k /= 10;
    //     sz++;
    // }
    long long ans = n;
    while (true)
    {
        long long sum = 0, k = n;
        while (k)
        {
            sum += k % 10;
            k /= 10;
        }
        if (target >= sum)
        {
            ans = n;
            while (ans < N)
                ans *= 10ll;
            break;
        }
        n /= 10ll;
        n++;
        if (n == 1)
        {
            ans = n;
            while (ans < N)
                ans *= 10ll;
            break;
        }
    }
    return ans - N;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> a{"asdf", "asdf", "asdf"}, b{"a", "b", "c"};
    vi c{1, 2, 2};
    makeIntegerBeautiful(6, 6);
}