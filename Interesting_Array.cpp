#include <bits/stdc++.h>
using namespace std;

#define int long long
using ll = long long;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define endl '\n'
#define Endl '\n'
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

bool check(vi &a)
{
    int n = a.size();
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] <= a[i + 1] and a[i + 1] <= a[i + 2])
            return false;
        if (a[i] >= a[i + 1] and a[i + 1] >= a[i + 2])
            return false;
    }
    return true;
}
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
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v));
        vi a(n), b(n);
        int k = 0, i = 0, j = (n - 1) / 2 + 1;
        while (k < n)
        {
            a[k++] = v[i++];
            if (k >= n)
                break;
            a[k++] = v[j++];
        }
        k = 0, i = 0, j = n / 2;
        while (k < n)
        {
            b[k++] = v[j++];
            if (k >= n)
                break;
            b[k++] = v[i++];
        }
        if (check(a))
            for (int &it : a)
                cout << it << ' ';
        else if (check(b))
            for (int &it : b)
                cout << it << ' ';
        else
            cout << -1;
        cout << endl;
    }
}