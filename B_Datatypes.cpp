#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
//#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vi v(n);
    for (auto &it : v)
        cin >> it;
    sort(all(v));
    v.erase(unique(all(v)), v.end());
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] * 2 > v[i + 1])
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}