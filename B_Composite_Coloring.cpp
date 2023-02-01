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

vi sample_set(1001);
void seive()
{
    for (int i = 2; i * i < 1001; i++)
    {
        if (sample_set[i] > 0)
            continue;
        else
        {
            for (int j = i; j < 1001; j += i)
                sample_set[j] = i;
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tst;
    cin >> tst;
    seive();
    while (tst--)
    {
        int n;
        cin >> n;
        vi ans(n);
        for (int i = 0; i < n; i++)
        {
            int g;
            cin >> g;
            ans[i] = sample_set[g];
        }
        int k = 1;
        map<int, int> m;
        for (auto &it : ans)
        {
            if (m.find(it) != m.end())
                it = m[it];
            else
                m[it] = k, it = k, k++;
        }
        cout << k - 1 << endl;
        for (auto &it : ans)
            cout << it << ' ';
        cout << endl;
    }
}