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
    for (int &it : v)
        cin >> it;
    vector<char> ans;
    int j = 0, k = n - 1;
    int top = -1;
    while (k >= j)
    {
        if (v[j] < top and v[k] < top)
            break;
        else if (v[j] > top and v[k] > top)
        {
            if (v[j] > v[k])
            {
                ans.pb('R');
                top = v[k];
                k--;
            }
            else
            {
                ans.pb('L');
                top = v[j];
                j++;
            }
        }
        else if (v[j] > top)
        {
            ans.pb('L');
            top = v[j];
            j++;
        }
        else
        {
            ans.pb('R');
            top = v[k];
            k--;
        }
    }
    cout << ans.size() << endl;
    for (auto &it : ans)
        cout << it;
}