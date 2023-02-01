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
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (a.size() > 2)
        {
            cout << "NO";
        }
        else if (a.size() == 2)
        {
            if (count(all(a), '1') & 1)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "YES";
        cout << endl;
    }
}