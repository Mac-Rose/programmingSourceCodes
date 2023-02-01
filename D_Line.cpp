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
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<int> cnt(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i < n / 2 and a[i] == 'L')
            {
                cnt[i] =
                    (n - i - 1) - i;
            }
            else if (i >= n / 2 and a[i] == 'R')
            {
                cnt[i] =
                    i - (n - i - 1);
            }
            if (a[i] == 'L')
                sum += i;
            else
                sum += (n - 1 - i);
        }
        sort(all(cnt), greater<int>());
        for (auto &it : cnt)
        {
            sum += it;
            cout << sum << ' ';
        }
        cout << endl;
    }
}