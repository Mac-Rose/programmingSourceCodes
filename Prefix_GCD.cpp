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
    // int tst;
    // cin >> tst;
    // while (tst--)
    {
        int N;
        cin >> N;
        vi P(N + 1);
        iota(all(P), 0);
        for (int i = 2; i <= N; ++i)
        {
            vi temp;
            for (int j = i; j <= N; j += i)
            {
                temp.pb(P[j]);
            }
            int k = temp.size() - 1;
            for (int j = i; j <= N; j += i)
            {
                P[j] = temp[k];
                k--;
            }
        }

        for (auto &it : P)
            cout << it << ' ';
    }
}