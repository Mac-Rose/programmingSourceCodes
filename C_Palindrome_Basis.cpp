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

string robotWithString(string a)
{
    stack<char> s;
    int n = a.size();
    vector<int> ans(n);
    int mina = INT_MAX;
    for (int i = n - 1; i > -1; i--)
    {
        ans[i] = min(a[i] - 97ll, mina);
        mina = ans[i];
    }

    int i = 0;
    string temp;
    while (i < n)
    {
        if (s.empty())
        {
            temp += ans[i] + 97;
            while (a[i] - 97 != ans[i])
            {
                s.push(a[i]);
                i++;
            }
        }
        else if (s.top() - 97 > ans[i])
        {
            temp += ans[i] + 97;
            while (a[i] - 97 != ans[i])
            {
                s.push(a[i]);
                i++;
            }
        }
        else
        {
            temp += s.top();
            s.pop();
            i--;
        }
        i++;
    }
    while (!s.empty())
    {
        temp += s.top();
        s.pop();
    }
    return temp;
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << robotWithString("vzhofnpo");
}