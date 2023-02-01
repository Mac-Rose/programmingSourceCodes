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

bool isPalindrome(vector<int> s)
{
    int N = s.size();
    for (int i = 0; i < N / 2; i++)
    {
        if (s[i] != s[N - 1 - i])
            return 0;
    }
    return 1;
}

inline vi helper(int k, vi v)
{
    vi ans;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == k)
            ;
        else
            ans.pb(v[i]);
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        string ans = "YES";
        for (int i = 0; i <= n / 2; i++)
        {
            if (v[i] != v[n - i - 1])
            {
                vi a = helper(v[i], v);
                vi b = helper(v[n - 1 - i], v);
                if (isPalindrome(a) == false and isPalindrome(b) == false)
                    ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }
}