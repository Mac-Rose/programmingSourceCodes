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
    int n, m;
    cin >> n >> m;
    map<int, int> s;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (i == 0)
            s[a] = 0;
        if (s.find(a) == s.end())
        {
            if (s.find(b) != s.end())
            {
                s[a] = s[b] - c;
            }
            else
            {
                        }
        }
        else if (s.find(b) != s.end() and s[b] != s[a] + c)
        {
            cout << "No";
            exit(0);
        }
        s[b] = s[a] + c;
    }
    cout << "Yes";
}