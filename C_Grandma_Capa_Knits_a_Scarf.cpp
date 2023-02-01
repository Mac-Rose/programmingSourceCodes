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
//26 bar m ho jayega bas check karna h ki uske opposite side m agar wo value nhi h to isse delete
//  karna padega aise karte hue 26 bar m ans aajeyega

bool isPalindrome(string a)
{
    string P = a;
    reverse(P.begin(), P.end());
    if (a == P)
    {
        return true;
    }
    else
    {
        return false;
    }
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
        string a, A;
        cin >> a;
        A = a;
        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (a[l] != a[r])
                {
                    if (a[l] == 'a' + i)
                    {
                        a.erase(a.begin() + l);
                        r--;
                    }
                    else if (a[r] == 'a' + i)
                    {
                        a.erase(a.begin() + r);
                        r--;
                    }
                    else
                        break;
                }
                else
                    l++, r--;
            }
            if (isPalindrome(a) == true)
            {
                ans = min(ans, n - (ll)a.size());
            }
            a = A;
        }
        if (ans == INT_MAX)
            cout << -1;
        else
            cout << ans;
        cout << endl;
    }
}