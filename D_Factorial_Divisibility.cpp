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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    vi freq(x + 1);
    for (int i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        freq[it]++;
    }
    bool ans = true;
    for (int i = 1; i < x; i++)
    {
        freq[i + 1] += freq[i] / (i + 1);
        freq[i] %= (i + 1);
        if (freq[i])
            ans = false;
    }
    if (freq[x] == 0)
        ans = false;
    (ans) ? cout << "Yes" : cout << "No";
    cout << endl;
}