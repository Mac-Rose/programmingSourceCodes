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
#define S second
#define all(c) (c).begin(), (c).end()
int const MOD = 1000000007;

bool validPalindrome(string s)
{
    int n = s.size();
    string s1, s2;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            if (i)
                s1 = s.substr(0, n - i - 1) + s.substr(n - i, i);
            else
                s1 = s.substr(0, n - i - 1);
            s2 = s.substr(0, i) + s.substr(i + 1, n - i - 1);
            break;
        }
    }
    n = s1.size();
    bool ans = true, ans1 = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (s1[i] != s1[n - 1 - i])
        {
            ans = false;
            break;
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (s2[i] != s2[n - 1 - i])
        {
            ans1 = false;
            break;
        }
    }
    return (ans or ans1);
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << validPalindrome("ebbbb");
}
