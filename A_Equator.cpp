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
    int n;
    cin >> n;
    vi v(n);
    int sum = 0;
    for (int &it : v)
    {
        cin >> it;
        sum += it;
    }
    int temp = 0;
    for (int &it : v)
    {
        temp += it;
        if (temp >= (sum - 1) / 2 + 1)
        {
            cout << &it - &v[0] + 1;
            break;
        }
    }
}