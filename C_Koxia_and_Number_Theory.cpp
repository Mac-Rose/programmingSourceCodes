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

pii gcd(int a, int b)
{
    if (a > b)
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
        map<int, set<int>> freq;
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] == v[i])
                    flag = false;
                pii rem = gcd(v[i], v[j]);
                freq[rem.F].emplace(rem.S);
            }
        }
        for (auto &[a, b] : freq)
            if (b.size() == a)
            {
                flag = false;
                break;
            }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << Endl;
    }
}