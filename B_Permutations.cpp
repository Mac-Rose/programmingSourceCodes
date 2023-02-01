#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pii;

#define pb emplace_back
#define mp make_pair
#define F first
#define int long long
#define S second
#define all(c) (c).begin(), (c).end()

void permute(vi a, int l, int r, vector<vi> &ans)
{
    if (l == r)
        ans.pb(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r, ans);
            swap(a[l], a[i]);
        }
    }
}

int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int count(vector<vector<char>> &matrix, vi it, int n, int k)
{
    vector<vector<char>> matrix1(n, vector<char>(k, 'a'));
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < it.size(); j++)
        {
            matrix1[i][j] = matrix[i][it[j] - 1];
        }
    }
    vi ans1;
    for (auto it : matrix1)
    {
        int g = 0;
        for (auto &i : it)
        {
            g += (i - 48) * pow(10, (it.size() - (&i - &it[0]) + 1));
        }
        ans1.pb(g);
    }
    sort(all(ans1));
    return ans1.back() - ans1[0];
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k;
    cin >> n >> k;
    vector<vector<char>> matrix(n, vector<char>(k, 'a'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            char c;
            cin >> c;
            matrix[i][j] = c;
        }
    }
    //all possible arrangement of places
    vi v(k);
    iota(all(v), 1);
    vector<vector<int>> ans;
    permute(v, 0, k - 1, ans);
    int ans1 = INT64_MAX;
    for (auto it : ans)
    {
        ans1 = min(ans1, count(matrix, it, n, k));
    }
    string ans2 = to_string(ans1);
    ans2 = ans2.substr(0, ans2.size() - 2);
    cout << ans2;
}