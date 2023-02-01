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
        int n, m, k;
        cin >> n >> m >> k;
        int freeSpace = n * m - 2;
        vi v(k);
        for (int &it : v)
            cin >> it;

        int i = 0;
        vector<bool> visited(k + 1, false);
        int j = k;
        bool ans = true;
        while (j > 0)
        {
            if (visited[j] == false)
            {
                while (v[i] != j)
                {
                    visited[v[i]] = true;
                    i++;
                    freeSpace--;
                    if (freeSpace < 2)
                    {
                        ans = false;
                        break;
                    }
                }
                i++;
                visited[j] = true;
                if (ans == false)
                    break;
            }
            else
                freeSpace++;
            j--;
        }
        if (ans)
            cout << "YA";
        else
            cout << "TIDAK";
        cout << Endl;
    }
}