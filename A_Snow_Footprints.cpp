#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
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
    int flag = 0, sto;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'R' and flag == 0)
        {
            cout << i + 1 << " ";
            flag++;
        }
        else if (a[i] == 'L' and flag == 0)
        {
            sto = i;
            flag = 2;
            break;
        }
        else if (a[i] == 'L' and flag == 1)
        {
            cout << i << " ";
            flag++;
            exit(0);
        }
    }
    if (flag == 2)
    {
        for (int i = n - 1; i > -1; i--)
        {
            if (a[i] == 'L')
            {
                cout << i + 1 << " " << sto;
                exit(0);
            }
        }
    }
    if (flag == 1)
    {
        for (int i = n - 1; i > -1; i--)
        {
            if (a[i] == 'R')
            {
                cout << i + 2;
                exit(0);
            }
        }
    }
}