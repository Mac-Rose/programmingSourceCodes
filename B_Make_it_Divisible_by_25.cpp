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

int check(string ar)
{
    int ans = 0, ans1 = 0;
    reverse(all(ar));
    int idx = find(all(ar), '0') - ar.begin();
    int a = find(ar.begin() + idx + 1, ar.end(), '0') - ar.begin();
    int b = find(ar.begin() + idx + 1, ar.end(), '5') - ar.begin();
    ans = min(a, b) - 1;
    idx = find(all(ar), '5') - ar.begin();
    a = find(ar.begin() + idx + 1, ar.end(), '2') - ar.begin();
    b = find(ar.begin() + idx + 1, ar.end(), '7') - ar.begin();
    ans1 = min(a, b) - 1;
    return min(ans, ans1);
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
        string a;
        cin >> a;
        cout << check(a) << endl;
    }
}