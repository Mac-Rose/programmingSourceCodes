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

int m;
vector<string> ans;
void find_kth_String_of_n(int n, int k)
{

    if (k > m)
        return;
    int d[n] = {0};
    for (int i = n - 1; i > -1; i--)
    {
        d[i] = k % 2;
        k /= 2;
    }
    if (k > 0)
        return;

    string s = "";
    for (int i = 0; i < n; i++)
        s += (d[i] + ('A'));

    ans.pb(s);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n >> m;
    vector<string> v(m);
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < (m + 1); i++)
        find_kth_String_of_n(n, i);
    sort(all(ans));
    sort(all(v));
    for (int i = 0; i < min(m + 1, (ll)ans.size()); i++)
    {
        if (v[i] != ans[i])
        {
            cout << ans[i];
            exit(0);
        }
    }
    cout << -1;
}