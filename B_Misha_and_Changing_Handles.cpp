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
    map<string, string> reg;    //starting username and current username
    map<string, string> value;  //current username and starting username
    map<string, set<string>> m; //starting username and all previouse username
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (reg.find(a) == reg.end() and value.find(a) == value.end()) //when value enter for the first time
        {
            reg[a] = b;
            value[b] = a;
            m[a].emplace(b);
        }
        else
        {
            if (m[value[a]].insert(b).S == true)
            {
                reg[value[a]] = b;
                value[b] = value[a];
            }
        }
    }
    cout << reg.size() << endl;
    for (auto &it : reg)
    {
        cout << it.F << ' ' << it.S << endl;
    }
}