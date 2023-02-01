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
        int ans = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        vi b(n);
        int va = 0, ba = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (v[i] != b[i])
            {
                if (v[i])
                    va++;
                if (b[i])
                    ba++;
                cnt++;
            }
        }
        cout << min(cnt, 1 + abs(va - ba)) << endl;
    }
}