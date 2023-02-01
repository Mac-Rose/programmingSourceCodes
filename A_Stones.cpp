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
        int a, b, c, A, B, C;
        cin >> a >> b >> c;
        A = a, B = b, C = c;
        int ans = 0, ans1 = 0;
        {
            while (a >= 1 and b >= 2)
            {
                ans += 3;
                a--;
                b--;
                b--;
            }
            while (b >= 1 and c >= 2)
            {
                ans += 3;
                b--;
                c--;
                c--;
            }
        }
        a = A, b = B, c = C;
        {

            while (b >= 1 and c >= 2)
            {
                ans1 += 3;
                b--;
                c--;
                c--;
            }
            while (a >= 1 and b >= 2)
            {
                ans1 += 3;
                a--;
                b--;
                b--;
            }
        }
        cout << max(ans, ans1) << endl;
    }
}