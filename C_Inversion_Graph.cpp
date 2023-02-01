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
        for (int &it : v)
            cin >> it;
        int um = n;
        int i = n - 1;
        priority_queue<int> q;
        int k = n;
        int curm = n + 1, temp = n + 1;
        int ans = 0;
        while (i > -1)
        {
            temp = min(temp, v[i]);
            q.emplace(v[i]);
            if (v[i] == um)
            {
                if (v[i] < curm)
                    ans++;
                curm = temp;
                while (q.empty() == false and q.top() == k)
                {
                    q.pop();
                    k--;
                }
                um = k;
            }
            i--;
        }
        cout << ans << endl;
    }
}