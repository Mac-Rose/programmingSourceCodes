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

bool check(int k, map<int, int> &freq)
{
    for (auto it : freq)
    {
        if (it.F == k)
            return true;
        else
        {
            if (it.S < freq[k] + 1)
                return false;
        }
    }
}

bool compare(pair<int, int> p, pair<int, int> q)
{
    return p.second < q.second;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    map<int, int> freq;
    freq[4] = 0;
    freq[8] = 0;
    freq[15] = 0;
    freq[16] = 0;
    freq[23] = 0;
    freq[42] = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(v[i], freq))
        {
            freq[v[i]]++;
        }
        else
            ans++;
    }
    pair<int, int> mi = *min_element(all(freq), compare);
    for (auto it : freq)
    {
        ans += it.S - mi.S;
    }
    cout << ans;
}