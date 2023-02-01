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
        string s;
        cin >> s;
        int n = s.length();
        s = s + "11";
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1] && s[i] != '2')
            {
                cnt++;
                s[i + 1] = '2';
            }
            if (s[i] == s[i + 2] && s[i] != '2')
            {
                cnt++;
                s[i + 2] = '2';
            }
        }
        cout << cnt << endl;
    }
}