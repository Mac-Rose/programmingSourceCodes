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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int z, o;
    cin >> z >> o;
    if (2 * z + 2 < o or o + 1 < z)
    {
        cout << -1;
    }
    else
    {
        if (z - 1 == o)
        {
            for (int i = 0; i < z + o; i++)
            {
                if (i & 1)
                    cout << 1;
                else
                    cout << 0;
            }
        }
        else
        {
            string ans;
            o -= z;
            for (int i = 0; i < z; i++)
            {
                ans += "10";
            }

            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] == '1' and ans[i + 1] == '0' and o)
                {
                    cout << "110";
                    o--;
                    i += 1;
                }
                else
                {
                    cout << ans[i];
                }
            }
            if (o == 2)
            {
                cout << "11";
            }
            else if (o == 1)
            {
                cout << '1';
            }
        }
    }
}