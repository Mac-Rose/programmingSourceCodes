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
    string n;
    cin >> n;
    string a = n;
    sort(all(a));
    cout << a.back() << endl;
    vector<vi> ans(a.back() - 48, vi(a.size()));
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = n[i] - 49; j > -1; j--)
        {
            ans[j][i]++;
        }
    }
    for (int i = 0; i < a.back() - 48; i++)
    {
        ans[i].erase(ans[i].begin(), find(all(ans[i]), 1));
    }
    for (auto &it : ans)
    {
        for (auto &i : it)
            cout << i;
        cout << ' ';
    }
}