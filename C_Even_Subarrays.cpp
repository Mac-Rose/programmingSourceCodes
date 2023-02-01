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
vector<string> ans;
int N;
string s;
void solve(int dot, int idx, string temp)
{
    if (dot == 4)
    {
        string x = s.substr(idx, N - idx);
        if (stol(x) < 256)
        {
            ans.push_back(temp + x);
        }
        return;
    }
    int i = 0;
    while (i < N - idx - 1)
    {
        i++;
        string x = s.substr(idx, i);
        if (stoi(x) < 256)
        {
            solve(dot + 1, idx + i, temp + x + ".");
        }
        else
            break;
    }
}
vector<string> restoreIpAddresses(string S)
{
    s = S;
    N = s.size();
    solve(1, 0, "");
    return ans;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    restoreIpAddresses("25525511135");
    for (auto &it : ans)
        cout << it << ' ';
}