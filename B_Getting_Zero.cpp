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
int const MOD = 32768;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi ans(n, 16);
    for (int i = 0; i < n; i++)
    {
        int g;
        cin >> g;
        if (g % 32768 == 0)
        {
            ans[i] = 0;
        }
        else
        {
            for (int j = g; j < g + 16; j++)
            {
                if (j % 2 == 0)
                {
                    int temp = j;
                    int k = 0;
                    while (temp % 2 == 0)
                    {
                        k++;
                        temp >>= 1;
                    }
                    ans[i] = min(ans[i], 15 - k + j - g);
                }
            }
        }
    }
    for (int &it : ans)
        cout << it << ' ';
}