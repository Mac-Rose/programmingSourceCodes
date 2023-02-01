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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'Q' or a[i] == 'A')
            b += a[i];
    }
    vi prefix(b.size() + 1, 0);
    for (int i = 1; i < b.size() + 1; i++)
    {
        if (b[i - 1] == 'Q')
            prefix[i]++;
        prefix[i] += prefix[i - 1];
    }
    int ans = 0;
    for (int i = 1; i < prefix.size() + 1; i++)
    {
        if (b[i - 1] == 'A')
            ans += prefix[i] * (prefix.back() - prefix[i]);
    }
    cout << ans;
}