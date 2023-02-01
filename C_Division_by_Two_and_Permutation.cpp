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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int &it : v)
        {
            cin >> it;
            while (it > n)
                it >>= 1;
        }
        sort(all(v));
        int i = 0, j = 1;
        while (v.front() and j < n)
        {
            if (v[i] == v[j])
            {
                while (binary_search(v.begin(), v.begin() + i, v[j] / 2))
                {
                    v[j] >>= 1;
                }
                v[j] >>= 1;
                sort(all(v));
                i++;
                j = i + 1;
            }
            else
                i = j, j++;
        }
        if (v.front())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}