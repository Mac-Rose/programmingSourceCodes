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
        string a;
        cin >> a;
        bool flag = true;
        int n = a.size();
        if (n & 1)
        {
            cout << "NO\n";
            continue;
        }
        for (int i = 0; i < a.size() / 2; i++)
        {
            if (a[i] != a[i + n / 2])
                flag = false;
        }
        (flag) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}