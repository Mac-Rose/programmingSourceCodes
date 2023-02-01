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
bool isPalindrome(string &s)
{
    int N = s.size();
    for (int i = 0; i < N / 2; i++)
    {
        if (s[i] != s[N - 1 - i])
            return 0;
    }
    return 1;
}
bool check(int i, string &a)
{
    int n = a.size();
    string a1 = a.substr(0, i + 1);
    string a2 = a.substr(i + 1, n - (i + 1));
    if (isPalindrome(a1) == false and isPalindrome(a2) == false)
        return true;
    else
        return false;
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
        string v;
        cin >> v;
        vi freq;
        int temp = 1;
        for (int i = 1; i < 2 * n; i++)
        {
            if (v[i] != v[i - 1])
            {
                freq.pb(temp);
                temp = 1;
            }
            else
            {
                temp++;
            }
        }
        freq.pb(temp);
        if (freq.size() == 1)
        {
            cout << -1;
        }
        else
        {
            if (freq.size() & 1)
            {
                if (isPalindrome(v) == false)
                {
                    cout << 1 << endl;
                    cout << v.size() << endl;
                    continue;
                }
                for (int i = freq.front(); i < 2 * n - freq.back(); i++)
                {
                    if (check(i, v))
                    {
                        cout << 2 << endl;
                        cout << i + 1 << ' ' << (2 * n) - (i + 1);
                        break;
                    }
                }
            }
            else
            {
                cout << freq.size() / 2 << endl;
                for (int i = 0; i < freq.size(); i += 2)
                {
                    cout << freq[i] + freq[i + 1] << ' ';
                }
            }
        }
        cout << endl;
    }
}