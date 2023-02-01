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
    int n, dur;
    cin >> n >> dur;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        sum += g;
    }
    if ((n - 1) * 10 + sum > dur)
        cout << -1;
    else
    {
        cout << (dur - sum) / 5;
    }
}