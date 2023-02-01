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
        int n;
        cin >> n;
        map<string, int> m;
        while (n--)
        {
            string a;
            cin >> a;
            m[a]++;
        }
        int ans = 0;
        int i = 1;
        for (auto it = m.begin(); it != m.end(); it++, i++)
        {
            int temp = 0;
            if (i > m.size())
                i = m.size();
            auto it1 = m.begin();
            advance(it1, i);
            for (; it1 != m.end(); it1++)
            {
                if (it1->F[0] == it->F[0] or it1->F[1] == it->F[1])
                    temp += it1->S;
            }
            ans += it->S * temp;
        }
        cout << ans << endl;
    }
}