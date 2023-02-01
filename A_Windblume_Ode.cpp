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

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

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
        vi v(n);
        int s = 0;
        for (auto &it : v)
        {
            cin >> it;
            s += it;
        }
        if (isPrime(s) == false)
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i + 1 << ' ';
            }
        }
        else
        {
            cout << n - 1 << endl;
            for (int i = 0; i < n; i++)
            {
                if (isPrime(s - v[i]) == false)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (j == i)
                            continue;
                        cout << j + 1 << ' ';
                    }
                    break;
                }
            }
        }
        cout << endl;
    }
}