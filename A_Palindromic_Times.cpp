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
    vector<string> v;
    for (int i = 0; i < 24; i++)
    {
        string it = to_string(i);
        if (it.size() == 1)
            it = "0" + it;
        string b = string(it.rbegin(), it.rend());
        if (stoi(b) > 59)
            continue;
        it += ":" + b;
        v.pb(it);
    }
    string a;
    cin >> a;
    int index = upper_bound(all(v), a) - v.begin();
    if (index == v.size())
        cout << "00:00";
    else
        cout << v[index];
}