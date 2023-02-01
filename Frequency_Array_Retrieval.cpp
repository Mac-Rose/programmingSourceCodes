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
        map<int, queue<int>> freq;
        for (int &it : v)
        {
            freq[it].push(&it - &v.front());
        }
        vi ans(n);
        int k = 1;
        bool flag = true;
        for (int &it : v)
        {
            if (ans[&it - &v.front()] == 0)
            {
                for (int j = 0; j < it; j++)
                {
                    if (freq[it].empty())
                    {
                        flag = false;
                        break;
                    }
                    ans[freq[it].front()] = k;
                    freq[it].pop();
                }
                k++;
            }
        }
        if (flag)
            for (int &it : ans)
                cout << it << ' ';
        else
            cout << -1;
        cout << endl;
    }
}