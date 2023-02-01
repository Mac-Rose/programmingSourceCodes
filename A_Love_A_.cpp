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
    string a;
    cin >> a;
    int c = count(all(a), 'a');
    int n = a.size();
    for (int i = 0; c <= n - c; i++)
    {
        if (a[i] != 'a')
            n--;
    }
    cout << n;
}