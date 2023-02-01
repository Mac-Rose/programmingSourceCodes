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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int k = 0;
        string ans;
        while (n)
        {
            if (k & 1)
            {
                ans += '1';
                n -= 1;
            }
            else
            {
                if (n >= 2)
                {
                    ans += '2';
                    n -= 2;
                }
                else
                {
                    ans += '1';
                    n--;
                }
            }
            k++;
        }
        if (ans.back() == ans[k - 2])
        {
            ans.pop_back();
            ans = '1' + ans;
        }
        cout << ans << endl;
    }
}