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
        string a, b;
        cin >> a >> b;
        for (char &it : a)
            if (it == 'G')
                it = 'B';
        for (char &it : b)
            if (it == 'G')
                it = 'B';
        if (a == b)
            cout << "YES";
        else
            cout << "NO";
        cout << Endl;
    }
}