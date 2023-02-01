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
        for (int i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
                v[i - 1] = -1;
        }
        vi temp;
        temp.push_back(INT64_MAX);
        int count = 0;
        for (int i = 0; i < n; i++)
            if (v[i] != -1)
                temp.push_back(v[i]);
        temp.push_back(INT64_MAX);
        for (int i = 1; i < temp.size() - 1; i++)
            if (temp[i - 1] > temp[i] and temp[i + 1] > temp[i])
            {
                count++;
            }
        if (count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}