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
    int n;
    cin >> n;
    string a;
    cin >> a;
    int cr = 0, cb = 0, cg = 0;
    cb = count(all(a), 'B');
    cg = count(all(a), 'G');
    cr = count(all(a), 'R');
    if (cb and cg and cr)
        cout << "BGR";
    else
    {
        if (cb + cr == 0)
            cout << 'G';
        else if (cb + cg == 0)
            cout << 'R';
        else if (cr + cg == 0)
            cout << 'B';
        else if (n == 2 and cb == 0)
            cout << 'B';
        else if (n == 2 and cr == 0)
            cout << 'R';
        else if (n == 2 and cg == 0)
            cout << 'G';
        else if (cb > 1 and n == 3)
            cout << "GR";
        else if (cr > 1 and n == 3)
            cout << "BG";
        else if (cg > 1 and n == 3)
            cout << "BR";
        else if (cb == 0 and cr > 0 and cg > 0)
            cout << "BGR";
        else if (cr == 0 and cb > 0 and cg > 0)
            cout << "BGR";
        else if (cg == 0 and cr > 0 and cb > 0)
            cout << "BGR";
    }
}