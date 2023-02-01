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
        int n = a.size();
        vi ones(n + 1), zeroes(n + 1);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                ones[i + 1]++;
            else
                zeroes[i + 1]++;
        }
        partial_sum(all(zeroes), zeroes.begin());
        partial_sum(all(ones), ones.begin());
        int ans = min(zeroes.back(), ones.back());
        for (int i = 0; i <= n; i++)
        {
            int cz = 0;
            if (i)
                cz = -zeroes[i];
            int co = ones[i];
            int l = i + 1, r = n;
            while (l <= r)
            {
                if (l == r and a[l - 1] == '0')
                {
                    break;
                }
                int mid = (l + r) / 2;
                if (cz + zeroes[mid - 1] > co + ones.back() - ones[mid])
                {
                    int temp = max(cz + zeroes[mid - 1], co + ones.back() - ones[mid]);
                    ans = min(temp, ans);
                    r = mid - 1;
                }
                else
                {
                    int temp = max(cz + zeroes[mid - 1], co + ones.back() - ones[mid]);
                    ans = min(temp, ans);
                    l = mid + 1;
                }
            }
        }
        cout << ans << endl;
    }
}