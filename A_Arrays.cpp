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
    int n, m;
    cin >> n >> m;
    vi first(n), second(m);
    int a, b;
    cin >> a >> b;
    for (auto &it : first)
        cin >> it;
    for (auto &it : second)
        cin >> it;
    for (int i = a - 1; i < a; i++)
    {
        for (int j = 0; j <= m - b; j++)
        {
            if (second[j] > first[i])
            {
                cout << "YES";
                exit(0);
            }
        }
    }
    cout << "NO";
}