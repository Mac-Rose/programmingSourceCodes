#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;

    int flag = 1;
    for (int i = 0; i < a.size(); i++)
    {
        if ((a[i] - 48) % 2 == 0 and a[i] - 48 < a.back() - 48)
        {
            swap(a[i], a.back());
            cout << a;
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        for (int i = a.size() - 2; i >= 0; i--)
        {
            if ((a[i] - 48) % 2 == 0)
            {
                swap(a[i], a.back());
                cout << a;
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << -1;
        }
    }
}