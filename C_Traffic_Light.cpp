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
        char light;
        cin >> light;
        string a;
        cin >> a;
        if (light == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        a += a;
        int i = 0, j = i + 1;
        int ans = 0;
        while (i < 2 * n)
        {
            if (a[i] == light)
            {
                j = i + 1;
                while (a[j] != 'g' and j < 2 * n)
                    j++;
                if (j < 2 * n)
                    ans = max(j - i, ans);
                i = j + 1;
            }
            else
                i++;
        }
        cout << ans << endl;
    }
}