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
    string str = "314159265358979323846264338327950288419716939937510";
    int tst;
    cin >> tst;
    while (tst--)
    {
        string n;
        cin >> n;
        int i = 0;
        while (i < n.size())
        {
            if (str[i] != n[i])
            {
                break;
            }
            i++;
        }
        cout << i << endl;
    }
}