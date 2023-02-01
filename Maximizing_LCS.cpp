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
vector<int> getOrder(vector<vector<int>> &tasks)
{
    int n = tasks.size();
    for (int i = 0; i < n; i++)
    {
        tasks[i].push_back(-i);
        tasks[i].front() *= -1;
        tasks[i][1] *= -1;
    }
    sort(tasks.begin(), tasks.end(), greater<>());
    priority_queue<vector<int>> q;
    vector<int> ans;
    ans.push_back(-tasks.front().back());
    int i = 1, cur = tasks.front()[1] + tasks.front()[0];

    while (i < n)
    {
        while (i < n and tasks[i].front() >= cur)
        {
            q.push({tasks[i][1], tasks[i][2], tasks[i][0]});
            i++;
        }
        ans.push_back(-q.top()[1]);
        cur += q.top()[2];
        q.pop();
    }
    while (!q.empty())
    {
        ans.push_back(-q.top()[1]);
        q.pop();
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vi> tasks{{19, 13}, {16, 9}, {21, 10}, {32, 25}, {37, 4}, {49, 24}, {2, 15}, {38, 41}, {37, 34}, {33, 6}, {45, 4}, {18, 18}, {46, 39}, {12, 24}};
    getOrder(tasks);
}