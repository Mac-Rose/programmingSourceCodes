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

bool isPalindrome(string s)
{
    int N = s.size();
    for (int i = 0; i < N / 2; i++)
    {
        if (s[i] != s[N - 1 - i])
            return 0;
    }
    return 1;
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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        if (isPalindrome(a) == true)
        {
            cout << 1;
        }
        else
        {
            if (k == 0)
                cout << 1;
            else
                cout << 2;
        }
        cout << endl;
    }
}