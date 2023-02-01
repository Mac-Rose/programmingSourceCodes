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
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a, b;
        cin >> b >> a;
        map<char, int> freq;
        for (int i = 0; i < 26; i++)
        {
            freq[b[i]] = i;
        }
        int n = a.size();
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            ans += abs(freq[a[i]] - freq[a[i - 1]]);
        }
        cout << ans << endl;
    }
}