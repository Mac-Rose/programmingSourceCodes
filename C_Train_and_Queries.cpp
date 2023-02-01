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
        int n, k;
        cin >> n >> k;
        vi v(n);
        map<int, int> last_occur;
        map<int, int> first_occur;
        for (int i = 0; i < n; i++)
        {
            int it;
            cin >> it;
            v[i] = it;
            last_occur[it] = i;
            if (first_occur.find(it) == first_occur.end())
                first_occur[it] = i;
        }
        for (int i = 0; i < k; i++)
        {
            int a, b;
            cin >> a >> b;
            if (first_occur.find(a) == first_occur.end() or last_occur.find(b) == last_occur.end())
                cout << "NO";
            else if (first_occur[a] < last_occur[b])
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }
}