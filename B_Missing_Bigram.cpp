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
        bool flag = false;
        string temp;
        for (int i = 0; i < n - 2; i++)
        {
            string a;
            cin >> a;
            if (i == 0)
            {
                temp += a;
                continue;
            }
            if (temp.back() != a.front())
                temp += a.front(), flag = true;
            temp += a.back();
        }
        if (flag == false)
            temp += temp.back();
        cout << temp << endl;
    }
}