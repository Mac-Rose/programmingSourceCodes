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
    string a;
    cin >> a;
    int i = 0;
    int k = 1;
    while (k < n)
    {
        if (a[i] == a[k])
        {
            a[k] = '*';
            k++;
        }
        else
        {
            k++;
            i = k;
            k++;
        }
    }
    string ans;
    for (int i = 0; i < n; i++)
        if (a[i] != '*')
            ans += a[i];
    if (ans.size() & 1)
    {
        ans.pop_back();
    }
    cout << n - ans.size() << endl;
    cout << ans;
}