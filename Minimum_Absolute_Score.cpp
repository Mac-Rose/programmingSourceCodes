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
static bool comp(vector<int> sec, vector<int> fir)
{
    if (sec[1] < fir[1])
        return true;
    else
        return false;
}
int largestArea(int n, int m, int k, vector<vector<int>> &enemy)
{
    enemy.push_back({0, 0});
    enemy.push_back({n + 1, m + 1});

    sort(enemy.begin(), enemy.end());
    k = enemy.size();
    int l = 0;
    for (int i = 1; i < k; i++)
    {
        l = max(l, enemy[i][0] - enemy[i - 1][0] - 1);
    }
    sort(enemy.begin(), enemy.end(), comp);
    int r = 0;
    for (int i = 1; i < k; i++)
    {
        r = max(r, enemy[i][1] - enemy[i - 1][1] - 1);
    }
    return l * r;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<vi> enemy{{5, 1}, {9, 6}, {10, 5}};
    cout << largestArea(n, m, k, enemy);
}