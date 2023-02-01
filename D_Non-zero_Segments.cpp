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
        prefix[i] += prefix[i - 1];
    }
    int ans = 0;
    map<int, vi> freq;
    for (int &it : prefix)
        freq[it].pb(&it - &prefix.front());
    vector<pii> temp;
    for (auto &it : freq)
    {
        for (int i = 1; i < it.S.size(); i++)
        {
            temp.push_back({it.S[i - 1] + 1, it.S[i]});
        }
    }
    if (temp.empty() == true)
    {
        cout << 0;
        exit(0);
    }
    sort(all(temp));
    int l = temp.front().F, r = temp.front().S;
    for (int i = 1; i < temp.size(); i++)
    {
        if (temp[i].F >= r)
        {
            ans++;
            l = temp[i].F;
            r = temp[i].S;
        }
        else
        {
            l = max(l, temp[i].F);
            r = min(r, temp[i].S);
        }
    }
    ans++;
    cout << ans;
}