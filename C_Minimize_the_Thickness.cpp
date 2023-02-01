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
        vi v(n);
        int sum = 0;
        for (int &it : v)
        {
            cin >> it;
        }
        int fin = 50000;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];

            int temp = 0, cnt = 0;
            bool flag = true;
            int ans = i + 1;
            for (int j = i + 1; j < n; j++)
            {
                temp += v[j];
                cnt++;
                if (temp > sum)
                {
                    flag = false;
                    break;
                }
                else if (temp == sum)
                {
                    ans = max(ans, cnt);
                    temp = 0;
                    cnt = 0;
                }
            }

            if (flag and temp == 0)
            {
                fin = min(ans, fin);
            }
        }
        cout << fin << endl;
    }
}