#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
        int a, b, k;
        cin >> a >> b >> k;
        vi pairs(2 * k);
        vi boys(a + 1), girls(b + 1);
        for (int i = 0; i < 2 * k; i++)
        {
            int g;
            cin >> g;
            if (i < k)
            {
                boys[g]++;
                pairs[2 * i] = g;
            }
            else
            {
                girls[g]++;
                pairs[2 * (i % k) + 1] = g;
            }
        }
        int count = 0;
        for (int i = 0; i < 2 * k; i += 2)
        {
            count += k - (boys[pairs[i]] + girls[pairs[i + 1]] - 1);
        }
        cout << count / 2 << endl;
    }
}