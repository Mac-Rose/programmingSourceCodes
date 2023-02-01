// Problem: B. Sereja and Suffixes
// Contest: Codeforces - Codeforces Round #215 (Div. 2)
// URL: https://codeforces.com/problemset/problem/368/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
#define mp make_pair
#define all(c) (c).begin(), (c).end()
#define F first
#define int long long
#define S second

/*********************************************************************
 * The master have failed more times than the student has ever tried.*
 *********************************************************************/
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vi v(n);
    vi freq(1e5 + 1, 0);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        v[i] = g;
        freq[g]++;
        if (freq[g] == 1)
            total++;
    }
    vi ans(n);
    for (int i = 1; i <= n; i++)
    {
        ans[i - 1] = total;
        if (freq[v[i - 1]] == 1)
            total--;
        freq[v[i - 1]]--;
    }
    while (m--)
    {
        int g;
        cin >> g;
        cout << ans[g - 1] << endl;
    }
}