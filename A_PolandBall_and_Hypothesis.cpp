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

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i)
            ;
        else
            return false;
    }
    return true;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n == 1)
        cout << 3;
    else if (n & 1)
        cout << 1;
    else
    {
        int m = 1;
        while (isPrime(n * m + 1))
            m++;
        cout << m;
    }
}