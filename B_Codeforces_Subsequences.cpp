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
    string c = "codeforces";
    vi v(10, 1);
    int prod = 1;
    while (prod < n)
    {
        for (int i = 0; i < 10; i++)
        {
            prod /= v[i];
            v[i]++;
            prod *= v[i];
            if (prod >= n)
                break;
            i %= 10;
        }
    }
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < v[i]; j++)
            cout << c[i];
}