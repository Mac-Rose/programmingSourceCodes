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
        int n;
        cin >> n;
        string a;
        cin >> a;
        map<char, vi> mp;
        pair<char, int> temp = {a.front(), 1};
        for (int i = 1; i < n; i++)
        {

            if (a[i] == a[i - 1])
            {
                temp.S++;
            }
            else
            {
                mp[a[i - 1]].pb(temp.S);
                temp = {a[i], 1};
            }
        }
        int ans = 0;
        mp[a.back()].pb(temp.S);
        for (auto &[a, b] : mp)
        {
            sort(all(b), greater<>());
            int temp1 = 0;
            if (b.front() == 1)
            {
                if (b.size() > 1)
                    temp1 = 1;
            }
            else
            {
                if (b.size() == 1)
                    temp1 = b.front() - 1;
                else if (b.front() == b[1])
                    temp1 = b.front();
                else
                    temp1 = b.front() - 1;
            }
            ans = max(ans, temp1);
        }
        cout << ans << endl;
    }
}