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
    int n;
    cin >> n;
    string a;
    cin >> a;
    string b = a.substr(n, n);
    a = a.substr(0, n);
    sort(all(a));
    sort(all(b));
    int flag = 0;
    if (a[0] > b[0])
        flag = 1;
    else if (a[0] == b[0])
    {
        cout << "NO";
        exit(0);
    }
    if (flag)
    {
        for (int i = 1; i < n; i++)
            if (b[i] >= a[i])
            {
                cout << "NO";
                exit(0);
            }
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            if (a[i] >= b[i])
            {
                cout << "NO";
                exit(0);
            }
        }
    }
    cout << "YES";
}