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
        char b;
        cin >> b;
        bool ans = false;
        for (int i = 0; i < a.size(); i += 2)
        {
            if (a[i] == b)
            {
                ans = true;
                break;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}