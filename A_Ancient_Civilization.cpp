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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, l;
        cin >> n >> l;
        vi ans(l);
        while (n--)
        {
            int a;
            cin >> a;
            for (int k = l - 1; k > -1; k--)
            {
                if (a & 1)
                    ans[k]++;
                else
                    ans[k]--;
                a = a >> 1;
            }
        }
        int k = 0;
        for (int i = l - 1, j = 0; i > -1; i--, j++)
        {
            if (ans[i] > 0)
            {
                k += (1 << j);
            }
        }
        cout << k << endl;
    }
}