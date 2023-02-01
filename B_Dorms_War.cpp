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
        string a;
        cin >> a;
        int ni;
        cin >> ni;
        set<char> v;
        for (int i = 0; i < ni; i++)
        {
            char a;
            cin >> a;
            v.emplace(a);
        }
        vi val;
        int temp = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (v.find(a[i]) != v.end())
            {
                val.pb(temp);
                temp = 0;
            }
            temp++;
        }
        if (val.empty())
            cout << 0 << endl;
        else
            cout << *max_element(all(val)) << endl;
    }
}