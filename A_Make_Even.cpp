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
        if ((a.back() - 48) & 1)
            ;
        else
        {
            cout << 0 << endl;
            continue;
        }
        if ((a.front() - 48) & 1)
            ;
        else
        {
            cout << 1 << endl;
            continue;
        }
        int flag = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if ((a[i] - 48) & 1)
                ;
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << 2 << endl;
            continue;
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
    }
}