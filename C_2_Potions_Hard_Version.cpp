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
    int n;
    cin >> n;
    priority_queue<int> q;
    int sum = 0;
    while (n--)
    {
        int g;
        cin >> g;
        sum += g;
        q.emplace(-g);
        while (q.empty() == false and sum < 0)
        {
            sum += q.top();
            q.pop();
        }
    }
    cout << q.size();
}