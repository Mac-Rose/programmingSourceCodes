// Problem: A. Replacement
// Contest: Codeforces - Codeforces Beta Round #97 (Div. 1)
// URL: https://codeforces.com/problemset/problem/135/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
#define double long double
#define ff first
#define ss second
#define pb push_back
#define mod 1000000007
#define lcm(x, y) (x * y) / __gcd(x, y)

#ifndef ONLINE_JUDGE
#endif

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int x = 0; x < n; x++)
            cin >> arr[x];

        sort(arr, arr + n);

        if (arr[n - 1] == 1)
            arr[n - 1] = 2;
        else
            arr[n - 1] = 1;

        sort(arr, arr + n);

        for (int x = 0; x < n; x++)
            cout << arr[x] << ' ';
        cout << '\n';
    }
    return 0;
}
/*------------------------------------Akash Saxena-------------------------------------*/