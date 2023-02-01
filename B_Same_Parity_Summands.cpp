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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        if (n < k)
            cout << "NO";
        else
        {
            if (k & 1) //k is odd
            {
                if (n & 1)
                {
                    cout << "YES\n";
                    cout << n - k + 1 << ' ';
                    for (int i = 0; i < k - 1; i++)
                        cout << "1 ";
                }
                else
                {
                    if (k * 2 > n)
                        cout << "NO";
                    else
                    {
                        cout << "YES\n";
                        for (int i = 0; i < k - 1; i++)
                        {
                            cout << "2 ";
                        }
                        cout << n - 2 * (k - 1);
                    }
                }
            }
            else //k is even
            {
                if (n & 1)
                    cout << "NO";
                else
                {
                    cout << "YES\n";
                    if (n % k == 0)
                    {
                        for (int i = 0; i < k; i++)
                            cout << n / k << ' ';
                    }
                    else
                    {
                        cout << n - k + 1 << ' ';
                        for (int i = 0; i < k - 1; i++)
                            cout << "1 ";
                    }
                }
            }
        }
        cout << endl;
    }
}