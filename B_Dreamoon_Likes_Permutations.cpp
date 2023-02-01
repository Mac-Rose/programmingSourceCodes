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
        int n;
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        int idx = max_element(all(v)) - v.begin();
        int mx = v[idx];
        int sec = n - mx;
        if (sec == 0 or mx == 0)
        {
            cout << "0\n";
            continue;
        }

        int ans = 0;
        vi temp1(v.begin(), v.begin() + mx), temp2(v.begin() + mx, v.end());
        sort(all(temp1)), sort(all(temp2));
        vi a1(mx), a2(sec);
        iota(all(a1), 1), iota(all(a2), 1);
        if (a1 == temp1 and a2 == temp2)
            ans += 5;

        vi remp1(v.begin(), v.begin() + sec), remp2(v.begin() + sec, v.end());
        sort(all(remp1)), sort(all(remp2));
        vi b1(sec), b2(mx);
        iota(all(b1), 1), iota(all(b2), 1);
        if (b1 == remp1 and b2 == remp2)
            ans += 3;

        if (sec == mx and ans == 8)
        {
            cout << "1\n";
            cout << sec << ' ' << sec << endl;
        }
        else if (ans == 8)
        {
            cout << "2\n";
            cout << sec << ' ' << mx << endl;
            cout << mx << ' ' << sec << endl;
        }
        else if (ans == 5)
        {
            cout << "1\n";
            cout << mx << ' ' << sec << endl;
        }
        else if (ans == 3)
        {
            cout << "1\n";
            cout << sec << ' ' << mx << endl;
        }
        else
            cout << 0 << endl;
    }
}