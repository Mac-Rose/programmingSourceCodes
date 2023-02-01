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
#define Endl '\n'
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
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
            cin >> it;
        sort(all(v), greater<>());
        int sum = v.front();
        bool flag = true;
        if (v.front() == v[1])
        {
            swap(v[1], v.back());
        }
        for (int i = 1; i < n; i++)
        {
            if (sum == v[i])
            {
                flag = false;
                break;
            }
            sum += v[i];
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (auto &it : v)
                cout << it << ' ';
            cout << endl;
        }
        else
            cout << "NO\n";
    }
}