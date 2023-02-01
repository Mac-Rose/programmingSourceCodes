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
        int n;
        cin >> n;
        string a;
        cin >> a;
        string temp1, temp2;
        int countz = count(all(a), '0');
        int counto = count(all(a), '1');
        int k = 0, m = 0;
        if (countz & 1)
            cout << "NO\n";
        else if (a.front() == '0' or a.back() == '0')
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                if (a[i] == '1')
                {
                    if (k < counto / 2)
                    {
                        k++;
                        temp1 += '(';
                        temp2 += '(';
                    }
                    else
                    {
                        temp1 += ')';
                        temp2 += ')';
                    }
                }
                else
                {
                    if (m & 1)
                    {
                        temp1 += '(';
                        temp2 += ')';
                    }
                    else
                    {
                        temp1 += ')';
                        temp2 += '(';
                    }
                    m++;
                }
            }
            cout << temp1 << endl
                 << temp2 << endl;
        }
    }
}