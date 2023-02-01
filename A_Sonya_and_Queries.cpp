#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
// #define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string, int> parity_count;
    int tst;
    cin >> tst;
    while (tst--)
    {
        char a;
        string g;
        cin >> a >> g;
        if (a == '+')
        {
            string parity;
            while (g.size() < 18)
                g = "0" + g;
            for (int i = 0; i < 18; i++)
            {
                if ((g[i] - 48) & 1)
                    parity += "1";
                else
                    parity += "0";
            }
            parity_count[parity] += 1;
        }
        else if (a == '-')
        {
            string parity;
            while (g.size() < 18)
                g = "0" + g;
            for (int i = 0; i < 18; i++)
            {
                if ((g[i] - 48) & 1)
                    parity += "1";
                else
                    parity += "0";
            }
            parity_count[parity] -= 1;
        }
        else
        {
            string parity;
            while (g.size() < 18)
                g = "0" + g;
            for (int i = 0; i < 18; i++)
            {
                if ((g[i] - 48) & 1)
                    parity += "1";
                else
                    parity += "0";
            }
            cout << parity_count[parity] << '\n';
        }
    }
}