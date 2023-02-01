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
        int ah, ap, dh, dp;
        cin >> ah >> ap >> dh >> dp;
        int k, w, a;
        cin >> k >> w >> a;
        bool flag = false;
        for (int i = 0; i <= k; i++)
        {
            int cround = (dh - 1) / (ap + i * w) + 1;
            int mround = (ah + (k - i) * a - 1) / dp + 1;
            if (cround <= mround)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}