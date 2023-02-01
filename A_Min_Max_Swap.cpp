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
        vi a(n), b(n);
        for (int &it : a)
            cin >> it;
        for (int &it : b)
            cin >> it;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                swap(a[i], b[i]);
        }
        sort(all(a));
        sort(all(b));
        cout << a.back() * b.back() << endl;
    }
}