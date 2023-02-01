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

bool cnt(string a)
{
    bool flag = true;
    if (a.size() <= 3)
        return flag;
    for (int i = 0; i <= a.size() - 3; i++)
    {
        if (a[i] == a[i + 1] and a[i + 1] == a[i + 2] and a[i] == '4')
        {
            flag = false;
            break;
        }
    }
    return flag;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    if (a.front() == '1' and count(all(a), '1') + count(all(a), '4') == a.size() and cnt(a))
        cout << "YES";
    else
        cout << "NO";
}