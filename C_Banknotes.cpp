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

/* Idea is to max utilise a denomination so that every possible value less than next
denomination is visited atleast once. If k doesn't exhaust till the last denomination
then we maximise the ans by using this last denomination.*/

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    vi powers(10);
    powers.front() = 1;
    for (int i = 1; i < 10; i++)
    {
        powers[i] = powers[i - 1] * 10;
    }
    while (tst--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        for (auto &it : v)
            cin >> it;
        int s = 0, temp;
        for (int i = 0; i < n; i++)
        {
            if (k < 0)
                break;
            if (i == n - 1)
                temp = k + 1;
            else
                temp = min(k + 1, powers[v[i + 1]] / powers[v[i]] - 1);
            s += powers[v[i]] * temp;
            k -= temp;
        }
        cout << s << endl;
    }
}