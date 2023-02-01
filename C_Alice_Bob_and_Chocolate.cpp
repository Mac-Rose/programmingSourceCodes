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

    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        if (n == 1)
        {
            cout << "1 0";
            exit(0);
        }
        int l = 0, r = n - 1;
        int temp1, temp2;
        temp1 = temp2 = 0;
        int ans1 = 0, ans2 = 0;
        while (l <= r)
        {
            if (l == r and temp1 == temp2)
            {
                ans1++;
                break;
            }
            else if (temp1 < temp2)
            {
                temp1 += v[l];
                ans1++;
                l++;
            }
            else if (temp1 == temp2)
            {
                temp1 += v[l];
                temp2 += v[r];
                l++, r--;
                ans1++, ans2++;
            }
            else
            {
                temp2 += v[r];
                ans2++;
                r--;
            }
        }
        cout << ans1 << ' ' << ans2;
    }
}