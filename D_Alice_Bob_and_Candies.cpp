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
        for (auto &it : v)
            cin >> it;
        int i = 0;
        int tmp = 0;
        int al = 0, bo = 0;
        while (v.size() != 0)
        {
            if (i & 1)
            {
                int temp = 0;
                for (int j = v.size() - 1; j >= 0; j--)
                {
                    temp += v[j];
                    if (temp > tmp or j == 0)
                    {
                        tmp = temp;
                        bo += temp;
                        v.erase(v.begin() + j, v.end());
                        break;
                    }
                }
            }
            else
            {
                int temp = 0;
                for (int j = 0; j < v.size(); j++)
                {
                    temp += v[j];
                    if (temp > tmp or j == v.size() - 1)
                    {
                        tmp = temp;
                        al += temp;
                        v.erase(v.begin(), v.begin() + j + 1);
                        break;
                    }
                }
            }
            i++;
        }
        cout << i << " " << al << " " << bo << endl;
    }
}