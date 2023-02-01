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
        string a;
        cin >> a;
        int first = find(all(a), '1') - a.begin();
        int ans = 0;
        if (first == n)
        {
            ans++;
            first = 0;
            a[0] = '1';
        }

        int last = find(a.rbegin(), a.rend(), '1') - a.rbegin();
        ans += last / (k + 1);
        last = n - last;
        ans += first / (k + 1);
        vi v;
        int temp = first;
        for (int i = first + 1; i < last; i++)
        {
            if (a[i] == '1')
            {
                v.pb(i - temp - 1);
                temp = i;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            ans += v[i] / (k + 1);
            if (v[i] % (k + 1) != k)
                ans--;
        }
        cout << ans << endl;
    }
}