#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define endl "\n"
#define sd(val) scanf("%d", &val)
#define ss(val) scanf("%s", &val)
#define sl(val) scanf("%lld", &val)
#define debug(val) printf("check%d\n", val)
#define all(v) v.begin(), v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val, 0, sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl;

int ceil(int a, int b)
{
    return (a + b - 1) / b;
}
void OJ()
{
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int inf = pow(10, 7);
vector<vector<int>> dp;
void fun(vector<int> l, int m)
{
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < l.size(); j++)
        {
            // if (j>=l[i])
            // {
            //     dp[i][j]=min(dp[i][j-l[i]],dp[i-1][j-l[i]],dp[i-1][j-l[i]])+1;
            // }
            // else{
            //     dp[i][j]=1;
            // }}
            dp[i][j] = 5;
        }
    }
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int n, x;
    cin >> n >> x;
    dp.resize(n, vector<int>(x, 5));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < x; j++)
            cin >> dp[i][j];
    }
}

int main()
{

    OJ();
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}