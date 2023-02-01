#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

void sort(vector<pair<int, int>> &v)
{
    int n = v.size();
    for (int j = 0; j < n; j++)
        for (int i = 1; i < n; i++)
        {
            if (v[i].S != v[i - 1].S)
            {
                if (v[i].F < v[i - 1].F)
                    swap(v[i], v[i - 1]);
            }
        }
}

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
        vi a(n), b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        vi v(all(a));
        sort(all(v));
        if (n == 1 or a == v)
        {
            cout << "Yes\n";
            continue;
        }
        int flag = 1;
        if (accumulate(all(b), 0) == 0 or accumulate(all(b), 0) == n)
            flag = 0;
        if (flag == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}