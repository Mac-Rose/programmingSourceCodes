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
        for (int i = 0; i < 3; i++)
        {
            char b;
            cin >> b;
            a += b;
        }
        if (a.find('7') == -1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}