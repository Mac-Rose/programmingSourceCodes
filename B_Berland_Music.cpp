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
        for (int &it : v)
            cin >> it;
        string a;
        cin >> a;
        vector<pii> liked, unliked;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
                liked.push_back({v[i], i});
            else
                unliked.push_back({v[i], i});
        }
        sort(all(liked), greater<>());
        sort(all(unliked));
        vi ans(n);
        int k = n;
        for (int i = 0; i < liked.size(); i++, k--)
        {
            ans[liked[i].S] = k;
        }
        k = 1;
        for (int i = 0; i < unliked.size(); i++, k++)
        {
            ans[unliked[i].S] = k;
        }
        for (auto it : ans)
            cout << it << ' ';
        cout << endl;
    }
}