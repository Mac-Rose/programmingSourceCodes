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
    vector<int> ans;
    for (int i = 2; i <= 10; i += 2)
    {
        string v;
        for (int j = 0; j < i / 2; j++)
        {
            v += '4';
        }
        for (int j = 0; j < i / 2; j++)
        {
            v += '7';
        }

        do
        {
            ans.pb(stoll(v));
        } while (next_permutation(all(v)));
    }
    int n;
    cin >> n;
    cout << *lower_bound(all(ans), n);
}