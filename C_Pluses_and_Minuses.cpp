#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

vector<int> getGreatestElements(vector<int> arr, int k)
{
    vector<int> ans;
    int n = arr.size();
    priority_queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (q.size() < k - 1)
        {
            q.emplace(-arr[i]);
        }
        else if (q.size() == k - 1)
        {
            q.emplace(-arr[i]);
            ans.push_back(-q.top());
        }
        else
        {
            if (-q.top() < arr[i])
            {
                q.pop();
                q.emplace(-arr[i]);
            }
            ans.push_back(-q.top());
        }
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int k;
    cin >> k;
    vi v(n);
    for (int &it : v)
        cin >> it;
    vi ans = getGreatestElements(v, k);
    for (int &it : ans)
        cout << it << ' ';
}