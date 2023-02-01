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
    map<int, int> m;
    for (int i = 1; i < 10; i++)
    {
        int g;
        cin >> g;
        m[i] = g;
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k > 0 and m[a[i] - 48] < a[i] - 48)
        {
            break;
        }
        if (m[a[i] - 48] > a[i] - 48)
        {
            a[i] = '0' + m[a[i] - 48];
            k++;
        }
    }
    cout << a;
}