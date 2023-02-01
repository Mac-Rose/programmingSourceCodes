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

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    while (tst--)
    {
        string a;
        cin >> a;
        vector<int> freq(26);
        for (char &it : a)
            freq[it - 97] += 2;
        string ans;
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < freq[i] / 2; j++)
                ans += 'a' + i;

            for (int j = 0; j < freq[i] / 2; j++)
                ans = char('a' + i) + ans;
        }
        cout << ans << endl;
    }
}