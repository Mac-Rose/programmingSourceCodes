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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vi freq(n + 1);
        vi table(k);

        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            freq[it]++;
        }
        for (int &it : table)
            cin >> it;
        sort(all(table));

        priority_queue<int> q;
        sort(all(freq), greater<>());

        for (int i = 0; i < n; i++)
        {
            if (freq[i])
            {
                q.push(freq[i]);
            }
        }
        int ans = 0;
        while (!q.empty() and k--)
        {
            int t = q.top();
            q.pop();
            ans += min(table[k], t);
            t -= table[k];
            if (t > 0)
            {
                q.push(t);
            }
        }
        cout << ans << endl;
    }
}