#include <bits/stdc++.h>
using namespace std;

// #define int long long
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define pb push_back
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
        int n, m;
        cin >> n >> m;
        vector<vector<bool>> seats(n, vector<bool>(m));
        vi b(n * m);
        map<int, int> freq;
        for (int &it : b)
        {
            cin >> it;
            freq[it]++;
        }
        int k = 0;
        map<int, list<pii>> temp;
        for (auto &it : freq)
        {
            int start = k % m;
            int last;
            if ((k % m) + it.S > m - 1)
                last = m - 1;
            else
                last = k % m + it.S - 1;
            for (int j = 0; j < it.S; j++)
            {
                int x, y;
                x = k / m;
                y = last - ((k % m) - start);
                temp[it.F].pb({x, y});
                k++;
                if (k % m == 0)
                {
                    start = 0;
                    if (it.S - j > m)
                        last = m - 1;
                    else
                    {
                        last = (it.S - j - 1) % m;
                        last--;
                    }
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n * m; i++)
        {
            seats[temp[b[i]].front().F][temp[b[i]].front().S] = i;
            temp[b[i]].pop_front();
        }
        cout << ans << endl;
    }
}