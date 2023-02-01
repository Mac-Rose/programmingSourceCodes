#include <bits/stdc++.h>
using namespace std;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if (n & 1)
    {
        n /= 2;
        n++;
        cout << (2 * n) * (n + 1);
    }
    else
        cout << pow(n / 2 + 1, 2);
}