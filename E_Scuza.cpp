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

int balance_water(vector<int> element)
{
    vector<int> c(4);
    vector<int> s(4);
    vector<int> f(4);
    for (int i = 1; i < 5; i++)
    {
        c[i - 1] = element[i];
    }
    for (int i = 5; i < 9; i++)
    {
        c[i - 5] = element[i];
    }
    for (int i = 9; i < 13; i++)
    {
        c[i - 9] = element[i];
    }
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[i] != c[i])
            ans++;
    }
    return ans - 1;
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
        for (int &it : v)
            cin >> it;
    }
}