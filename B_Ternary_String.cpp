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

int check(int start, vector<vi> &freq)
{
    int last = freq.size() - 1;
    int ans = freq.size() + 1;
    int l = start + 1;
    while (l <= last)
    {
        int mid = (l + last) / 2;
        if (freq[mid][0] > freq[start][0] and freq[mid][1] > freq[start][1] and freq[mid][2] > freq[start][2])
            ans = mid - start, last = mid - 1;
        else
            l = mid + 1;
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a;
        cin >> a;
        int n = a.size();
        vector<vi> freq(n + 1, vi(3));
        for (int i = 0; i < n; i++)
        {
            freq[i + 1][a[i] - 49]++;
        }
        for (int i = 1; i <= n; i++)
        {
            freq[i][0] += freq[i - 1][0];
            freq[i][1] += freq[i - 1][1];
            freq[i][2] += freq[i - 1][2];
        }
        int ans = n + 1;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, check(i, freq));
        }
        if (ans == n + 1)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
}