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
    string a, b;
    cin >> a >> b;
    if (a == b)
        cout << "YES";
    else if (a.size() != b.size())
        cout << "NO";
    else if (count(all(a), '0') == a.size() or count(all(b), '0') == b.size())
        cout << "NO";
    else
        cout << "YES";
}