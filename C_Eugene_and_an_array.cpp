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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi prefix(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> prefix[i];
    }
    partial_sum(all(prefix), prefix.begin());
    map<int, int> s;
    int k = 1;
    int ans = 0;
    for (int i = 0; i <= n; i++)
    {
        s[prefix[i]]++;
        while (s[prefix[i]] == 2)
        {
            ans += i - k;
            s[prefix[k - 1]]--;
            k++;
        }
    }
    int temp = n - k + 1;
    ans += temp * (temp + 1) / 2;
    cout << ans;
}