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
    string a;
    cin >> a;
    int n = a.size();
    for (int i = 1; i <= n - 3; i++)
    {
        if (a[i] == 'a' and a[i + 1] == 't')
        {
            a[i] = '@';
            a.erase(a.begin() + i + 1);
            n--;
            break;
        }
    }
    int i = 1;
    while (i <= n - 4)
    {
        if (a[i] == 'd' and a[i + 1] == 'o' and a[i + 2] == 't')
        {
            a[i] = '.';
            a.erase(a.begin() + i + 1);
            a.erase(a.begin() + i + 1);
            n -= 2;
        }
        i++;
    }
    cout << a;
}