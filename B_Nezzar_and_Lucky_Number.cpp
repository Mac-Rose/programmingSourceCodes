#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
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
    vector<vi> m;
    for (int i = 2; i < 10; i++)
    {
        vi temp(500, 0);
        vi t;
        for (int j = i; j < i * 10; j += 10)
        {
            t.push_back(j);
        }
        temp[0] = 1;
        for (int j = 0; j < i * 10; j++)
        {
            if (temp[j] == 1)
            {
                for (int k = 0; k < t.size(); k++)
                {
                    temp[j + t[k]] = 1;
                }
            }
        }
        vector<int> you;
        for (int j = 0; j < i * 10; j++)
        {
            if (temp[j] == 0)
                you.push_back(j);
        }
        m.push_back(you);
    }
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= k * 10 or k == 1)
            {
                cout << "YES";
            }
            else
            {
                if (find(all(m[k - 2]), v[i]) == m[k - 2].end())
                    cout << "YES";
                else
                    cout << "NO";
            }
            cout << endl;
        }
    }
}