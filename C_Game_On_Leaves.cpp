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
        int n, k;
        cin >> n >> k;
        map<int, vi> m;
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            m[a].pb(b);
            m[b].pb(a);
        }
        if (m[k].size() < 2)
            cout << "Ayush";
        else
        {
            if ((n - m[k].size() - 1) & 1)
            {
                if (m[k].size() & 1)
                {
                    cout << "Ashish";
                }
                else
                    cout << "Ayush";
            }
            else
            {
                if (m[k].size() & 1)
                {
                    cout << "Ayush";
                }
                else
                    cout << "Ashish";
            }
        }
        cout << endl;
    }
}