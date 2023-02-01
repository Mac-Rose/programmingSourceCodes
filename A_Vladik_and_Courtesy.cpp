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
#define MOD 1000000007

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int k = 0;
    int a = -1, b = 0;
    while (true)
    {
        if (k & 1)
        {
            b += 2;
            if (m >= b)
                m -= b;
            else
            {
                cout << "Valera";
                break;
            }
        }
        else
        {
            a += 2;
            if (n >= a)
                n -= a;
            else
            {
                cout << "Vladik";
                break;
            }
        }
        k++;
    }
}