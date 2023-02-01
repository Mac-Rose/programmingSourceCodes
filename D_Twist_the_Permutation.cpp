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

void left_shift(vector<int> &v, int mag, int x)
{
    rotate(v.begin(), v.begin() + mag, v.begin() + x);
}
int cur(vi &v, int val)
{
    int i = 0;
    while (v[i] != val)
    {
        i++;
    }
    return i;
}
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
        vi v(n);
        for (int &it : v)
            cin >> it;
        vi ans(n);

        for (int i = n - 1; i > -1; i--)
        {
            int x = cur(v, i + 1);
            if (x == i)
                continue;
            ans[i] = 1 + x;
            left_shift(v, ans[i], i + 1);
        }
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}