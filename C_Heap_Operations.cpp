#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first

#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<string> ans;
    priority_queue<int, vector<int>, greater<int>> q;
    //q.emplace(100000000000);
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        if (a == "insert")
        {
            int g;
            cin >> g;
            ans.pb(a + " " + to_string(g));
            q.emplace(g);
        }
        else if (a == "getMin")
        {
            int g;
            cin >> g;
            while (q.top() < g)
            {
                ans.pb("removeMin");
                q.pop();
            }
            if (q.top() == g)
            {
                ans.pb(a + " " + to_string(g));
            }
            else
            {

                ans.pb("insert " + to_string(g));
                q.push(g);
                ans.pb(a + " " + to_string(g));
            }
        }
        else
        {
            if (q.size() == 1)
            {
                ans.pb("insert 0");
                ans.pb("removeMin");
            }
            else
            {
                ans.pb("removeMin");
                q.pop();
            }
        }
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << endl;
}