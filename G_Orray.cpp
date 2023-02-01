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
        sort(all(v), greater<int>());

        int orTillNow = v.front();
        vector<bool> visited(n);
        visited.front() = true;

        vector<int> maxed(32, 0);
        for (int i = 0ll, k = v.front(); i < 32; i++)
        {
            if ((k >> i) & 1ll)
                maxed[i] = 1ll;
        }
        vi fin;
        fin.pb(v.front());
        for (int i = 31ll; i > -1; i--)
        {
            if (maxed[i] == 0ll)
            {
                int temp = 0ll;
                int ans = -1ll;
                for (int j = 0ll; j < n; j++)
                {
                    if (visited[j] == false and ((v[j] >> i) & 1ll))
                    {
                        if (temp < (orTillNow | v[j]))
                        {
                            temp = (orTillNow | v[j]);
                            ans = j;
                        }
                    }
                }
                if (ans != -1ll)
                {
                    visited[ans] = true;
                    fin.pb(v[ans]);
                    orTillNow = temp;
                    for (int i = 0; i < 32; i++)
                        if ((temp >> i) & 1)
                            maxed[i] = 1;
                }
            }
        }
        for (int i = n - 1; i > -1; i--)
        {
            if (visited[i] == false)
            {
                fin.pb(v[i]);
            }
        }
        for (auto &it : fin)
            cout << it << ' ';
        cout << endl;
    }
}