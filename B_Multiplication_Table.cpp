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
    int n;
    cin >> n;
    vector<vi> matrix(n, vi(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vi ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = matrix[i][(i + 1) % n] * matrix[i][(i + 2) % n] / matrix[(i + 1) % n][(i + 2) % n];
    }
    for (int &it : ans)
        cout << (int)sqrt(it) << ' ';
}