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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (int &it : v)
        cin >> it;
    int N = n;
    n = (1 << n);
    for (int i = 1; i < (n); i++)
    {
        int j = i;
        int temp = 0;
        int k = 0;
        while (k < N)
        {
            if (j & 1)
                temp += v[k];
            else
                temp -= v[k];
            k++;
            j >>= 1;
        }
        if (temp % 360 == 0)
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}