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
    int n;
    cin >> n;
    vi v(n);
    priority_queue<int, vi, greater<int>> q1, q2, q3;
    for (auto &it : v)
        cin >> it;
    for (int i = 0; i < 2 * n; i++)
    {
        int g;
        cin >> g;
        if (g == 1)
            q1.emplace(v[i % n]);
        else if (g == 2)
            q2.emplace(v[i % n]);
        else
            q3.emplace(v[i % n]);
    }
    set<int> done;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int g;
        cin >> g;
        if (g == 1)
        {
            while (done.find(q1.top()) != done.end() and q1.empty() == false)
            {
                q1.pop();
            }
            if (q1.empty() == true)
                cout << -1;
            else
            {
                cout << q1.top();
                done.emplace(q1.top());
                q1.pop();
            }
        }
        else if (g == 2)
        {
            while (done.find(q2.top()) != done.end() and q2.empty() == false)
            {
                q2.pop();
            }
            if (q2.empty() == true)
                cout << -1;
            else
            {
                cout << q2.top();
                done.emplace(q2.top());
                q2.pop();
            }
        }
        else
        {
            while (done.find(q3.top()) != done.end() and q3.empty() == false)
            {
                q3.pop();
            }
            if (q3.empty() == true)
                cout << -1;
            else
            {
                cout << q3.top();
                done.emplace(q3.top());
                q3.pop();
            }
        }
        cout << ' ';
    }
}