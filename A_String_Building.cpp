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
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a;
        cin >> a;
        int n = a.size();
        bool flag = true;
        set<char> s(all(a));
        for (auto &it : s)
        {
            if (it != 'a' and it != 'b')
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO\n";
            continue;
        }
        if (a.size() == 1)
        {
            cout << "NO";
        }
        else if (a.front() == 'a' and a[1] == 'b')
            cout << "NO";
        else if (a.front() == 'b' and a[1] == 'a')
            cout << "NO";
        else if (a.back() == 'a' and a[n - 2] == 'b')
            cout << "NO";
        else if (a.back() == 'b' and a[n - 2] == 'a')
            cout << "NO";
        else if (a.find("aba") != -1)
            cout << "NO";
        else if (a.find("bab") != -1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}