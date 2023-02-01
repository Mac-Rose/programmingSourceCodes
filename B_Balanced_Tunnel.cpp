#include <bits/stdc++.h>
using namespace std;

// #define int long long
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
    vi ent(n);
    for (int &it : ent)
        cin >> it;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int it;
        cin >> it;
        m[it] = i;
    }
    vi temp;
    int min = -1;
    for (int i = 0; i < n; i++)
    {
        int x = m[ent[i]];
        if (x > min)
        {
            for (int j = x - 1; j > min; j--)
            {
                temp.pb(j);
            }
            min = x;
        }
    }
    cout << temp.size();
}