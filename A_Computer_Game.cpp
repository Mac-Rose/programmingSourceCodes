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
        string b;
        cin >> a >> b;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1' and b[i] == '1')
            {
                cout << "NO";
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES";
        cout << endl;
    }
}