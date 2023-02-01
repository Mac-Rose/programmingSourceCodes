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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string a;
    cin >> a;

    int ones = count(all(a), '1');
    int zeros = count(all(a), '0');

    int x = (1 << ones);
    int y = (1 << n) - (1 << zeros) + 1;
    for (int i = x; i <= y; i++)
        cout << i << ' ';
}