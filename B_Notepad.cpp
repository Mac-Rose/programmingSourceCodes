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
        string a;
        cin >> a;
        map<string, int> m;
        bool ans = false;
        for (int i = 0; i < a.size() - 1; i++)
        {
            string s = a.substr(i, 2);
            if (m[s])
                ans = true;
            if (i)
            {
                string b = a.substr(i - 1, 2);
                m[b]++;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}