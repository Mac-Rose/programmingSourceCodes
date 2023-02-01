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
        string a, b;
        cin >> a >> b;
        int countxa = count(all(a), 'X');
        int countxb = count(all(b), 'X');
        if (a == b)
            cout << "=";
        else if (a.back() == b.back())
        {
            if (a.back() == 'L')
            {
                if (a.size() > b.size())
                    cout << ">";
                else
                    cout << "<";
            }
            else
            {
                if (a.size() < b.size())
                    cout << ">";
                else
                    cout << "<";
            }
        }
        else
        {
            if (a.back() == 'M')
            {
                if (b.back() == 'S')
                    cout << ">";
                else
                    cout << "<";
            }
            else if (a.back() == 'L')
            {
                cout << ">";
            }
            else if (a.back() == 'S')
            {
                cout << "<";
            }
        }
        cout << endl;
    }
}