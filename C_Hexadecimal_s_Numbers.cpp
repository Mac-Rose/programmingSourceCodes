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
    int n;
    cin >> n;
    vi v(1024);
    for (int i = 1; i < 1024; i++)
    {
        int j = i;
        string s = "";
        while (j)
        {
            if (j & 1)
                s = '1' + s;
            else
                s = '0' + s;
            j >>= 1;
        }
        v[i] = stoi(s);
    }
    cout << upper_bound(all(v), n) - v.begin() - 1;
}