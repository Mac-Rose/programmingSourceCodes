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
        int n, q;
        cin >> n >> q;
        vi v(n);
        for (int &it : v)
            cin >> it;

        vector<vi> bitTable(60, vector<int>(n + 1));
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (v[i])
            {
                if (v[i] & 1)
                    bitTable[j][i + 1] = 1;
                j++;
                v[i] >>= 1ll;
            }
        }
        for (int i = 0; i < 60; i++)
        {
            partial_sum(all(bitTable[i]), bitTable[i].begin());
        }

        while (q--)
        {
            int k, l1, r1, l2, r2;
            cin >> k >> l1 >> r1 >> l2 >> r2;
            int firstOne = bitTable[k][r1] - bitTable[k][l1 - 1];
            int secondOne = bitTable[k][r2] - bitTable[k][l2 - 1];

            cout << (firstOne * ((r2 - l2 + 1) - secondOne)) + (secondOne * ((r1 - l1 + 1) - firstOne)) << endl;
        }
    }
}