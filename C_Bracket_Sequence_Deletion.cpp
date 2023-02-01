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
        string temp;
        vi ans;
        bool poss = true;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '(')
            {
                temp += '(';
                cnt++;
            }
            else
            {
                temp += ')';
                cnt--;
            }
            if (temp.front() == temp.back() and temp.size() > 1)
            {
                ans.pb(temp.size());
                temp = "";
                poss = true;
                cnt = 0;
                continue;
            }
            if (cnt == 0 and poss == true)
            {
                ans.pb(temp.size());
                temp = "";
            }
            else if (cnt == -1)
            {
                poss = false;
            }
        }
        cout << ans.size() << ' ' << n - accumulate(all(ans), 0) << endl;
    }
}