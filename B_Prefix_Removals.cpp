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
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a;
        cin >> a;
        map<int, int> freq;
        for (char &it : a)
            freq[it]++;
        int n = a.size();
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (freq[a[i]] > 1)
            {
                freq[a[i]]--;
            }
            else
                break;
        }
        string ans = a.substr(i, n - i);
        cout << ans << endl;
    }
}