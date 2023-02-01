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
        int n, s, r;
        cin >> n >> s >> r;
        vi ans;
        ans.pb(s - r);

        int max = (r - 1) / (n - 1) + 1;
        int k = r % (n - 1);
        if (k == 0)
            k = n - 1;
        for (int i = 0; i < k; i++)
            ans.push_back(max);
        for (int i = 0; i < n - 1 - k; i++)
            ans.push_back(max - 1);

        for (int &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}