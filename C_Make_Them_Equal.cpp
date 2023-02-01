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
        int n;
        char a;
        string b;
        cin >> n >> a >> b;
        if (count(all(b), a) == b.size())
            cout << "0\n";
        else
        {
            int i = find(b.begin() + n / 2, b.end(), a) - b.begin();
            if (i != n)
                cout << "1\n"
                     << i + 1 << '\n';
            else
                cout << "2\n"
                     << n - 1 << ' ' << n << '\n';
        }
    }
}