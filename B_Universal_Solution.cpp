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
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a;
        cin >> a;
        string ans;
        char c;
        int cR, cS, cP;
        cR = cS = cP = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'R')
                cP++;
            else if (a[i] == 'S')
                cR++;
            else
                cS++;
        }
        if (cR >= cS and cR >= cP)
            c = 'R';
        else if (cS >= cR and cS >= cP)
            c = 'S';
        else
            c = 'P';
        for (int i = 0; i < a.size(); i++)
            cout << c;
        cout << endl;
    }
}