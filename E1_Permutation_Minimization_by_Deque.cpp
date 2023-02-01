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
        int n;
        cin >> n;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            if (dq.empty())
                dq.emplace_front(g);
            else if (g < dq.front())
                dq.emplace_front(g);
            else
                dq.emplace_back(g);
        }
        for (auto &it : dq)
            cout << it << ' ';
        cout << '\n';
    }
}