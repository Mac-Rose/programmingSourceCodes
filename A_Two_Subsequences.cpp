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
        string b = a;
        sort(all(b));
        cout << b.front() << ' ';
        int flag = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b.front() and flag == 0)
            {
                flag = 1;
                continue;
            }
            else
                cout << a[i];
        }
        cout << endl;
    }
}